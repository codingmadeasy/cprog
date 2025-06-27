/* (e) Write a program to receive values of latitude (L1, L2) and longitude 
(G1, G2), in degrees, of two places on the earth and output the 
distance (D) between them in nautical miles. The formula for 
distance in nautical miles is: 
D = 3963 cos-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) ) */

#include <stdio.h>
#include<math.h>
int main()
{
    double l1,l2,g1,g2,D;
    printf("Enter Latitudes L1 & L2");
    scanf("%lf%lf",&l1,&l2);
    printf("Enter Longitudes G1 & G2");
    scanf("%lf%lf",&g1,&g2);
    D=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("Nautical Miles = %lf",D);
    return 0;
}
