#include <stdio.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int file;
	ssize_t n;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(97);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not open file %s\n", argv[1]);
		exit(98);
	}
	n = read(file, &ehdr, sizeof(ehdr));
	if (n != sizeof(ehdr))
	{
		dprintf(STDERR_FILENO, "Error: can not read file %s\n", argv[1]);
		exit(98);
	}
	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
		ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
		ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
		ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file - ");
		dprintf(STDERR_FILENO, "magic number does not match\n");
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (n = 0; n < EI_NIDENT; n++)
	{
		printf("%02x ", ehdr.e_ident[n]);
	}
	printf("\n");
	printf("  Class:                             ");
	printf("%s\n", ehdr.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              ");
	printf("%s\n", ehdr.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
	printf("  Version:                           ");
	printf("%d %s\n", ehdr.e_ident[EI_VERSION], ehdr.e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : "");
	printf("  OS/ABI:                            ");
	switch (ehdr.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD \n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux \n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris \n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX \n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD \n");
			break;
		default:
			printf("<unknown: %x>\n", ehdr.e_ident[EI_OSABI]);
			break;
	}
	printf("  ABI Version:                       ");
	printf("%d\n", ehdr.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (ehdr.e_type)
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
			printf("Processor Specific: (%x)\n", ehdr.e_type);
			break;
	}
	printf("  Entry point address:               ");
	printf("%#lx\n", (unsigned long)ehdr.e_entry);
	close(file);
	return (0);
}
