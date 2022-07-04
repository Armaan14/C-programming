#include<stdio.h>

int x[100],y[100],z[100],m,n;

void display(){
printf("Both arrays merged in ascending order:\n");
for(int i=0; i<m+n; i++)printf("%d\n",z[i]);
}

void mergearrays(){
for(int i=0; i<n; i++)z[i]=x[i];
for(int i=n; i<n+m; i++)z[i]=y[i-n];
}

void ascending(){
for(int i=0; i<m; i++){
    for(int j=i+1; j<m; j++){
        if(x[i]>x[j]){
            int tmp=x[i];
            x[i]=x[j];
            x[j]=tmp;
        }
    }
}
for(int i=0; i<m; i++){
    for(int j=i+1; j<m; j++){
        if(y[i]>y[j]){
            int tmp=y[i];
            y[i]=y[j];
            y[j]=tmp;
        }
    }
}
}

void readarray(){
printf("Enter the number of elements for the two arrays:\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of the first array:\n");
for(int i=0; i<m; i++)scanf("%d",&x[i]);
printf("Enter the elements of the second array:\n");
for(int i=0; i<n; i++)scanf("%d",&y[i]);
}

int main(){
readarray();
ascending();
mergearrays();
display();
return 0;
}
