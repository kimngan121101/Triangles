#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

FILE *fp;
char *filename;
int a ,b ,c;

	printf("Triangles: Ngan Hoang\n");

	if (argc < 2){
		printf("Usage: triangles filename\n");
		return(1);
	}
	
	else {	
	filename = argv[1];
	fp = fopen(filename, "r");
	
		if(fp){
		while (!feof(fp)){
			fscanf(fp,"%d %d %d", &a, &b, &c);	
			if ((a + b > c)&&(a + c > b)&&(b + c > a)){
				printf("%d %d %d\n", a, b, c);
			}	 
		}		
		}
		else{
			printf("File %s cannot be openned.\n", filename);
			return(1);
		}
	}
	fclose(fp);
return (0);
}
