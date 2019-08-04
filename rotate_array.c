#include<stdio.h>

int main(){

int n,t,d,count=0,k=0;

//scanf("%d", &t);

printf("ENTER THE NUMBER OF ELEMENTS\n");


scanf("%d", &n);


printf("ENTER $$$$$\n");

scanf("%d", &d);

int arr[n];
int brr[n];

for(int i=0;i<n;i++){
    scanf("%d>>", &arr[i]);
}



for(int j=0+d; j<(n+d) ; j++){
    if(j<n){
    brr[k] = arr[j];
    k++;
    }
    else 
    break;
    }

    for(int i=0;i<(d);i++){
        brr[k] = arr[i];
        k++;
    }


for(int i=0;i<n;i++){
    printf("%d ", brr[i]);
}

return 0;
}