/*Calculate and print 
        (i) n-th term of a arithmetic series and 
        (ii) sum up to n-th term.
        
        input : first term, common difference, value of n
        output: n<integer>-th term is: <term>
                sum up to n<integer>-th term is: <sum>*/

#include <stdio.h>
int main(){
	int a, d, n,nth_term;
	printf("Enter values 'a', 'd', 'n' respectively\n");
	scanf("%d%d%d",&a,&d,&n);
	nth_term = a+(n-1)*d;
	printf("%dth term is : %d\n",n,nth_term);
	printf("Sum up to %dth term is: %d\n",n, (n*(a+nth_term))/2);
	return 0;
}
