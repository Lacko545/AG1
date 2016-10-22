#include<stdio.h>
#define EDGE_NUM 300
#define NODE_NUM 100

int main(int argc, char ** argv)
{
	int i,N,X,Y,j,n,v,k;
	char x;
	N=X=Y=0;
	int nodes[NODE_NUM], edges[EDGE_NUM][2], keys[NODE_NUM];

	for (i=0;i<NODE_NUM;i++){keys[i]=0;}

	scanf( "%d", &N );
	scanf( "%d", &X );
	scanf( "%d", &Y );

	printf("%d %d %d", N, X, Y);
	fflush(stdout);

	for(i=0; i<N; i++){
		scanf("%d", &nodes[i]);
		for(; j<nodes[i]; j++){
			scanf("%d", &edges[j][0]);
			scanf("%c", &x);
			if      (x=='a') edges[j][1]=1;
			else if (x=='b') edges[j][1]=2;
			else if (x=='c') edges[j][1]=4; 
			else edges[j][1]=0;
		}
		
	}
	scanf ("%d", &n );
	for (i=0; i<n ;i++){
		scanf("%d", &v);
		scanf("%c", &x);
		
		if      (x=='a' && ((keys[v]%2) == 0 ))  keys[v]+=1;
		else if (x=='b' && ((keys[v]>>1)%2)==0 ) keys[v]+=2;
		else if (x=='c' && ((keys[v]>>2)%2)==0 ) keys[v]+=4; 
	}
	

	for (i=0; i<N; i++){
		printf("%d\n",nodes[i]);

	}

	return 0;
}
