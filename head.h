#ifndef HEAD_H
# define HEAD_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_photo
{
	int		id;
	char	orient;
	int		ntags;
	char	**tags;
}				t_photo;


extern t_photo	**photos;
extern int		n_photos;

int	read_input();

void quickSort(int low, int high);

#endif
