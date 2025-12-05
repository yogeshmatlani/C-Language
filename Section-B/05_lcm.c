 #include <stdio.h>

int main(void) {
    int num, div=2;

    printf("Enter any number : ");
    scanf("%d", &num);    

    while (num != 1)
    {
        if(num % div == 0){
            num /= div;
            printf("%d ", div); 
        }else{
            div++;
        }
    }
    

}