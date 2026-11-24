#include<stdio.h>
void main(){
int harry,potter,ginny,weasely;
printf("Enter the number of rows and columns for Matrix A: ");
scanf("%d %d", &harry, &potter);
ginny=potter;
printf("For Matrix B the number of rows are automatically the same as columns of Matrix A please input the number of columns for Matrix B: ");
scanf("%d", &weasely);
int sirius[harry][potter], ron[ginny][weasely];

printf("Enter the elements of Matrix A: \n");
for(int ava=0;ava<harry;ava++){
     for (int ka = 0; ka < potter; ka++) {
            scanf("%d", &sirius[ava][ka]);
        }
    }
printf("\nEnter the elements of Matrix B:\n");
    for (int da = 0; da < ginny; da++) {
        for (int va = 0; va < weasely; va++) {
            scanf("%d", &ron[da][va]);
        }
    }
printf("\n Matrix A: \n");
for(int ava=0;ava<harry;ava++){
     for (int ka = 0; ka < potter; ka++) {
            printf("%d ", sirius[ava][ka]);
        }
        printf("\n");
    }
printf("\n Matrix B:\n");
    for (int da = 0; da < ginny; da++) {
        for (int va = 0; va < weasely; va++) {
            printf("%d ", ron[da][va]);
        }
        printf("\n");
    }
int hermione[harry][weasely];
for (int le = 0; le< harry; le++) {
        for (int vi = 0; vi < weasely; vi++) {
            hermione[le][vi] = 0;
            for (int oso = 0; oso < potter; oso++) {
                hermione[le][vi] += sirius[le][oso] * ron[oso][vi];
            }
        }
    }
printf("\n Matrix (A x B):\n");
    for (int win = 0; win < harry; win++) {
        for (int gar = 0; gar < weasely; gar++) {
            printf("%d ", hermione[win][gar]);
        }
        printf("\n");
    }


}




