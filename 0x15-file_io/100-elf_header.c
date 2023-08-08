#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void cheque_elf(unsigned char *elf_id);
void pt_magic(unsigned char *elf_id);
void pt_class(unsigned char *elf_id);
void pt_data(unsigned char *elf_id);
void pt_version(unsigned char *elf_id);
void pt_ABI(unsigned char *elf_id);
void pt_osABI(unsigned char *elf_id);
void pt_type(unsigned int elf_type, unsigned char *elf_id);
void pt_entry(unsigned long int elf_entry, unsigned char *elf_id);
void close_elf(int elf);

/**
 * cheque_elf - Checks if a file is an ELF file.
 * @elf_id: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void cheque_elf(unsigned char *elf_id)
{
	int i = 0;

	for (; i < 4; i++)
	{
		if (elf_id[i] != 127 &&
				elf_id[i] != 'E' &&
				elf_id[i] != 'L' &&
				elf_id[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * pt_class - Prints the class of an ELF header.
 * @elf_id: A pointer to an array containing the ELF class.
 */
void pt_class(unsigned char *elf_id)
{
	printf("  Class:                             ");

	switch (elf_id[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_id[EI_CLASS]);
	}
}
/**
 * pt_version - Prints the version of an ELF header.
 * @elf_id: A pointer to an array containing the ELF version.
 */
void pt_version(unsigned char *elf_id)
{
	printf("  Version:                           %d",
			elf_id[EI_VERSION]);

	switch (elf_id[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * pt_magic - Prints the magic numbers of an ELF header.
 * @elf_id: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void pt_magic(unsigned char *elf_id)
{
	int i = 0;

	printf("  Magic:   ");

	for (; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_id[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * pt_ABI - Prints the ABI version of an ELF header.
 * @elf_id: A pointer to an array containing the ELF ABI version.
 */
void pt_ABI(unsigned char *elf_id)
{
	printf("  ABI Version:                       %d\n",
			elf_id[EI_ABIVERSION]);
}
/**
 * pt_data - Prints the data of an ELF header.
 * @elf_id: A pointer to an array containing the ELF class.
 */
void pt_data(unsigned char *elf_id)
{
	printf("  Data:                              ");

	switch (elf_id[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_id[EI_CLASS]);
	}
}

/**
 * pt_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @elf_id: A pointer to an array containing the ELF class.
 */
void pt_type(unsigned int e_type, unsigned char *elf_id)
{
	if (elf_id[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}
/**
 * pt_osABI - Prints the OS/ABI of an ELF header.
 * @elf_id: A pointer to an array containing the ELF version.
 */
void pt_osABI(unsigned char *elf_id)
{
	printf("  OS/ABI:                            ");

	switch (elf_id[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_id[EI_OSABI]);
	}
}
/**
 * pt_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @elf_id: A pointer to an array containing the ELF class.
 */
void pt_entry(unsigned long int e_entry, unsigned char *elf_id)
{
	printf("  Entry point address:               ");

	if (elf_id[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (elf_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @ac: The number of arguments supplied to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) ac, char *av[])
{
	Elf64_Ehdr *head;
	int op, rd;

	op = open(av[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	rd = read(op, head, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(head);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", av[1]);
		exit(98);
	}

	cheque_elf(head->elf_id);
	printf("ELF Header:\n");
	pt_magic(head->elf_id);
	pt_class(head->elf_id);
	pt_data(head->elf_id);
	pt_version(head->elf_id);
	pt_osABI(head->elf_id);
	pt_ABI(head->elf_id);
	pt_type(head->e_type, head->elf_id);
	pt_entry(head->e_entry, head->elf_id);

	free(head);
	close_elf(op);
	return (0);
}
