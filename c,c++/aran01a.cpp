    #include<stdio.h>
    #include<string.h>
    main()
    {
    int t;
    scanf("%d",&t);
    while(t-->0)
    {
    int i,l,temp=0;
    char str[100];
    scanf("%s",str);
    l=strlen(str);
    if(l<3)
    break;
    else
    for(i=0;i<l;i++)
    {
    temp=("%d",str[i])+temp;
     
    }
    printf("%c\n",temp/l);
    }
    return 0;
    }

