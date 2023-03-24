#include <stdio.h>

struct Marks {
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};

int main() {
	
    struct Marks m[5];
    int i;
    for(i=0; i<4; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &m[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",m[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%f", &m[i].chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%f", &m[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%f", &m[i].phy_marks);
    }
    
    for(int i=0; i<4; i++) {
	    printf("Student %d\n",i+1);
	    float percentage = (m[i].chem_marks + m[i].maths_marks + m[i].phy_marks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
	}
  return 0;
}    
