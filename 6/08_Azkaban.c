#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0 ; i < numPrisoners; i++) {
        //เรียงลำดับจำนวนที่ถูกฆ่า
		// ถ้า numPrisoners == 10 , m = 3 then i ที่ 0 == 1
		if(i == 0 ){
			killerPtr = &prisoners[m-1];
		}
		else{
			int j = 0 ;
			while(j < m){
				killerPtr++;
				if((*killerPtr != 0)&&(*killerPtr <= numPrisoners)){
					j++;
				}
				else if(*killerPtr > numPrisoners){
					killerPtr = prisoners;
					while(1){
						if(*killerPtr != 0){
							break;
						}
						killerPtr++;
					}
					j++;
				}
				
			}
		}





		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
	 array[killedPrisoner - 1] = 0;
}
