#include "newFile.h"

int main()
{
	int	i;
	int j;
	int fd;
	int ret;
	char *fileName;
	char *buf;

	i = 0;
	j = 0;
	buf = (char *)calloc(2 ,sizeof(char));
	while (i < 5 && j <= 999)
	{
		j++;
		fileName = ft_strjoin(ft_file(j), ".cpp");
		fd = open(fileName, O_RDWR | O_CREAT, 777);
		ret = read(fd, buf, 1);
		if (ret == 0)
		{
			write(fd, "#include <iostream>\n#include <string>\n\nusing namespace std;\n\nint main()\n{\n\n\treturn 0;\n}", 87);
			i++;
		}
	}
	return (0);
}
	
