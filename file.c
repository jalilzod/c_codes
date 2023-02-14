void writeKeyTab(Key* p, int n)
{
    FILE* fp;
    int i;
    if ((fp = fopen("man.txt", "wb")) == NULL)
    {
        printf("File does not exist\a");
        exit(1);
    }
    for (i = 0; i < n; i++) {
        if (fwrite(p + i, sizeof(Key), 1, fp) != 1)
            printf("Write error!\n");
        fclose(fp);
    }
}
