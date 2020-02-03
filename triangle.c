#include <stdio.h>
#include <math.h>

int main(void)
{
	int a1,a2,b1,b2,c1,c2;
	float area,s,circle;
	float ab, bc, ac;

	printf("Enter point a:\n");
	scanf("%d %d",&a1,&a2);
	printf("Enter point b:\n");
	scanf("%d %d",&b1,&b2);
	printf("Enter point c:\n");
	scanf("%d %d",&c1,&c2);

	ab = pow(pow(abs(b1-a1),2)+pow(abs(b2-a2),2),0.5);
	bc = pow(pow(abs(c1-b1),2)+pow(abs(c2-b2),2),0.5);
	ac = pow(pow(abs(c1-a1),2)+pow(abs(c2-a2),2),0.5);

	//printf("%.2f %.2f %.2f",ab,bc,ac);

	//judge if it's a trangle;
	if((ab+bc>ac)&&(ab+ac>bc)&&(bc+ac>ab))
	{//calculate s and area;
		circle = ab+bc+ac;
		s = circle/2;
		area = pow(s*(s-ab)*(s-bc)*(s-ac),0.5);
		printf("Circle is %.2f, Aera is %.2f\n",circle,area);
		
	}
	else
		printf("It is not a trangle!");




return 0;
}