#include <stdlib.h>
#include <stdio.h>
 
int leMatriz(int l, int c, int **mat);
int printAMatriz(int l, int c, int **matA, int **matB, int **matC);
int printBMatriz(int l, int c, int **matA, int **matB, int **matC);
int subMatriz(int l, int c, int **matA, int **matB, int **matC);
int somaMatriz(int l, int c, int **matA, int **matB, int **matC);
int multMatriz(int l, int c, int **matA, int **matB, int **matC);
int controlMatriz(int l, int c,int control,int **matA, int **matB, int **matC);
int controlMatriz2(int l, int c,int control,int **matA, int **matB, int **matC);
int intersecMatriz(int l, int c, int **matA, int **matB, int **matC, int **matD);
 
main()
{
	system("color 2B");
      int **matA, **matB, **matC, **matD, l = 3, c = 3; 
	  int control,control2,controlif,controlif2,controluser;  
      matA = (int **)malloc(sizeof(int)*l); 
      for (int i = 0; i < l; i++)
          matA[i] = (int *)malloc(sizeof(int)*c);
      matB = (int **)malloc(sizeof(int)*l);
      for (int i = 0; i < l; i++)
          matB[i] = (int *)malloc(sizeof(int)*c);       
      matC = (int **)malloc(sizeof(int)*l);
      for (int i = 0; i < l; i++)
          matC[i] = (int *)malloc(sizeof(int)*c);
      matD = (int **)malloc(sizeof(int)*l);
      for (int i = 0; i < l; i++)
          matD[i] = (int *)malloc(sizeof(int)*c); 
               
          
      matA = (int **)malloc(sizeof(int)*l); 
      for (int j = 0; j < c; j++)
          matA[j] = (int *)malloc(sizeof(int)*c);
      matB = (int **)malloc(sizeof(int)*l);
      for (int j = 0; j < c; j++)
          matB[j] = (int *)malloc(sizeof(int)*c);       
      matC = (int **)malloc(sizeof(int)*l);
      for (int j = 0; j < c; j++)
          matC[j] = (int *)malloc(sizeof(int)*c); 
      matD = (int **)malloc(sizeof(int)*l);
      for (int j = 0; j < c; j++)
          matD[j] = (int *)malloc(sizeof(int)*c);         
		
	 	
	  //controluser = controluser2;
      printf("\t\t\tRodolfo Casemiro Ribeiro RA:------- \n\t " );
      printf("\t\tEngenharia da Computacao              \n\t " );
 	  printf("\t\tEstrutura matricial dupla dinamica   \n\t " );
	  printf("\t\t===================================\n\n\n");	    
      printf("\n MATRIZ A:\n\n");
      leMatriz(l, c, matA);     
      printf("\n MATRIZ B:\n\n");
      leMatriz(l, c, matB);  
      printf("\n Resultado da MATRIZ A:\n\n");
      printAMatriz(l, c, matA, matB, matC);
      printf("\n Resultado da MATRIZ B:\n\n");
      printBMatriz(l, c, matA, matB, matC);
      intersecMatriz(l, c, matA, matB, matC, matD);
	  printf("\n\nSoma DAS MATRIZES:\n\n");
      somaMatriz(l, c, matA, matB, matC); 
	  printf("\n\nSubtracao DAS MATRIZES:\n\n");
      subMatriz(l, c, matA, matB, matC);  
      printf("\n\nMULTIPLICACAO DAS MATRIZES:\n\n");
      multMatriz(l, c, matA, matB, matC);
      printf("\n\nAlterar valor de um posicao da matriz A ?   \nS = 1  \t  N= 0\n");
      scanf("%d",&controlif);
      if(controlif == 1){
      	controlMatriz(l, c,control,matA, matB, matC);
      }
      //return 0;
      printf("\n\nAlterar valor de um posicao da matriz B ?   \nS = 1  \t  N= 0\n");
      scanf("%d",&controlif2);
      if(controlif2 == 1){
      	controlMatriz2(l, c,control,matA, matB, matC);
      }
      return 0;
      //printf("\n\nAlterar valor de um posicao da matriz B  \nS/N?");
      //scanf("%d",&control2);
      //control2Matriz(l, c,control,control2 ,matA, matB, matC);
      system("pause");
}
 
int leMatriz(int l, int c, int **mat)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\nDigite a posicao [L%d][C%d] da matriz: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}
 
int multMatriz(int l, int c, int **matA, int **matB, int **matC)
{      
      for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          {
              matC[i][j] = 0;
              for (int k = 0; k < 3; k++)
                  matC[i][j] += matA[i][k] * matB[k][j];
              printf("%d\t", matC[i][j]);
          }
          printf("\n"); 
      }
}

int somaMatriz(int l, int c, int **matA, int **matB, int **matC)
{      
      for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          {
              matC[i][j] = 0;
              for (int k = 0; k < 3; k++)
                  matC[i][j] = matA[i][j] +  matB[i][j];
              printf("%d\t", matC[i][j] );
          }
          printf("\n"); 
      }
}

int subMatriz(int l, int c, int **matA, int **matB, int **matC)
{      
      for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          {
              matC[i][j] = 0;
              for (int k = 0; k < 3; k++)
                  matC[i][j] = matA[i][j] -  matB[i][j];
              printf("%d\t", matC[i][j] );
          }
          printf("\n"); 
      }
}

int printAMatriz(int l, int c, int **matA, int **matB, int **matC)
{      
      for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          {
              matC[i][j] = 0;
              for (int k = 0; k < 3; k++)
                  matC[i][j] = matA[i][j];
              printf("%d\t", matC[i][j] );
          }
          printf("\n"); 
      }
}

int printBMatriz(int l, int c, int **matA, int **matB, int **matC)
{      
      for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          {
              matC[i][j] = 0;
              for (int k = 0; k < 3; k++)
                  matC[i][j] =  matB[i][j];
              printf("%d\t", matC[i][j] );
          }
          printf("\n"); 
      }
}


int controlMatriz(int l, int c,int control, int **matA, int **matB, int **matC)
{      
	int i,j,value,linha,coluna;
	printf("Digite a linha p/ alterar , digite 1 p/ L1\n ");
	printf("\t\t\t , digite 2 p/ L2\n ");
	printf("\t\t\t , digite 3 p/ L3\n ");
	scanf("%d",&linha);
	i=linha-1;
      if (i>=0 && i < 3)
      {
      	printf("Digite a coluna p/ alterar, digite 1 p/ C1\n ");
      	printf("\t\t\t , digite 2 p/ C2\n ");
      	printf("\t\t\t , digite 3 p/ C3\n ");
		scanf("%d",&coluna);
		j=coluna-1;}
		else 
		return 0;
          if (j>=0 && j < 3)
          {
          	printf("\nDigite o valor da posicao\n\n");
          	scanf("%d",&value);
          	printf("Resultado de A:\n");
            matA[i][j] = value;  
            for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          {
            printf("%d\t", matA[i][j] );
          }
          printf("\n"); 
      }
      printf("Matriz A alterada com sucesso !!\n");
}
}

int controlMatriz2(int l, int c,int control, int **matA, int **matB, int **matC)
{      
	
	int i,j,value,linha,coluna;
	printf("Digite a linha p/ alterar , digite 1 p/L1\n ");
	printf("\t\t\t , digite 2 p/ L2\n ");
	printf("\t\t\t , digite 3 p/ L3\n ");
	scanf("%d",&linha);
	i=linha-1;
      if (i>=0 && i < 3)
      {
      	printf("Digite a coluna p/ alterar, digite 1 p/ C1\n ");
      	printf("\t\t\t , digite 2 p/ C2\n ");
      	printf("\t\t\t , digite 3 p/ C3\n ");
		scanf("%d",&coluna);
		j=coluna-1;
		}
		else 
		return 0;
          if (j>=0 && j < 3)
          {
          	printf("Digite o valor\n");
          	scanf("%d",&value);
            matB[i][j] = value;  
            for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          {
            printf("%d\t", matB[i][j] );
          }
          printf("\n"); 
      }
      printf("Matriz B alterada com sucesso !!\n");
      }
}

int intersecMatriz(int l, int c, int **matA, int **matB, int **matC, int **matD)
{    
      for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          {
              matC[i][j] = 0;
              matD[i][j] = 0;
              for (int k = 0; k < 3; k++)
                  matC[i][j] =  matA[i][j];
                  matD[i][j] =  matB[i][j];
                  if(matC[i][j] == matD[i][j])    
              printf("\nNumeros que intercedem %d %d", matD[i][j] , matC[i][j]);
              // not else
          }
          //printf("\n"); 
      }
}

