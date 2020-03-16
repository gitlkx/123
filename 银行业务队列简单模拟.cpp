void Print(int);

int main() {
    int n;
    scanf("%d",&n);
    int a[1001];
    for(int k=0; k<n; k++) {
        scanf("%d",&a[k]);
    }
    int i=0,j=0;
    while(i<n||j<n) {
        for(; i<n; i++)
            if(1==a[i]%2) {
//              printf("{");
                Print(a[i++]);
                break;
            }
        for(; i<n; i++) {
            if(1==a[i]%2) {
                Print(a[i++]);
                break;
            }
        }
        for(; j<n; j++) {
            if(0==a[j]%2) {
                Print(a[j++]);
//              printf("}");
                break;
            }
        }
    }

    return 0;
}
void Print(int num) {
    static int flag=0;

    if(flag)printf(" ");
    else flag=1;

    printf("%d",num);

}
