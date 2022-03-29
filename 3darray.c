void main()
{
	int a[3][4][2],i,j,k;
	printf("\n enter elemnet in 3d array");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			for(k=0; k<2; k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("\n element of 3D array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			for(k=0; k<2; k++)
			{
				printf("\t%d",a[i][j][k]);
			}
		}
		printf("\n");
	}
	getch();
}
