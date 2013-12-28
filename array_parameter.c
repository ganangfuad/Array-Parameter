//Ganang Fuad Husaini
//10112694
//IF-16

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void input_array(float A[], int N)
     {
      int i;
      for(i=0; i<N; i++)
      {
               printf("A[%d] = ",i);scanf("%d",&A[i]);
      }
     }

void hitung_rata (int A[], int n)
	{
    float total;
    float rata_rata;
    int K=0;
		total = 0;
		while ((K<n))
		{
			total= A[K]+total;		
			K++;
		}
		rata_rata=total/n;
		
		printf("Rata-rata nilai array : %.2f \n",rata_rata);
	}

int main(int argc, char *argv[])
{
  float array[MAX];
  int n;
  printf("Masukkan element : ");scanf("%d",&n);
  printf("=====================================\n");
  input_array(array,n);
  hitung_rata(array,n);
  system("PAUSE");	
  return 0;
}
