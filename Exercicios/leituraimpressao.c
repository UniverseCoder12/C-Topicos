int main()
{
    int nums[5];

    for(int i = 0; i < 5; i++)
    {
        int n = i+1;
        printf("digite o %d° número: ", n);
        scanf("%d", &nums[i]);
    }
    for(int i = 4; i > -1;i--)
    {
        int n = i+1;
        printf("%d\n", nums[i]);
    }
    return 0;
}