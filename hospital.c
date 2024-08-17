#include <stdio.h>
struct patientStucture {
	char name[30];
	int id,department,phone,age;
} patientStuctureArray[100];
int indexNumber=0, doctor, floorNumber, deptId, patientId, emergency;
void patientVisit();
void getMedicalAttention(int i);
void view(int i);
void getDeptNameById(int i);
void listOutDeptsWithIds();
void showDeptRoute(int i);
int main() {
	int loop=1;
	while(loop!=0) {
		printf("\n======================Welcome to the hospital guide!======================\n");
		printf("What would you like to do today?\n");
		printf("Enter '0' for Exit \n");
		printf("Enter '1' for Visit a patient \n");
		printf("Enter '2' for Get medical attention \n");
		printf("Enter '3' for Route of Department or place in hospital \n");
		printf("Enter your choice: ");
		scanf("%d", &loop);
		if(loop==0) {
			break;
		} else if(loop==1) {
			patientVisit();
		} else if(loop==2) {
			getMedicalAttention(++indexNumber);
		} else if(loop==3) {
			listOutDeptsWithIds();
			printf("Enter the deptId for route from above list :");
			scanf("%d",&deptId);
			showDeptRoute(deptId);
		}
	}
	return 0;
}
void patientVisit() {
	printf("Enter the patient Id for visit :");
	scanf("%d",&patientId);
	if(indexNumber>0 && patientId>0 && indexNumber>=patientId) {
		view(patientId);
	} else {
		printf("Enter valid patient Id try again.\n");
	}
}
void getMedicalAttention(int i) {
	patientStuctureArray[i].id=i;
	printf("Enter a patient Name : ");
	scanf("%s", patientStuctureArray[i].name);
	printf("Enter a patient age : ");
	scanf("%d", &patientStuctureArray[i].age);
	printf("Enter a patient mobile number : ");
	scanf("%d", &patientStuctureArray[i].phone);
	listOutDeptsWithIds();
	printf("Enter disease belonging department id : ");
	scanf("%d",&patientStuctureArray[i].department);
	printf("Enter '1' for Emergency '0' for Normal / Non Emergency :");
	scanf("%d",&emergency);
	printf("you can see your details below \n");
	view(i);
	printf(" and consult ");
	if(emergency==1) {
		printf(" Emergency Doctor. \n");
	} else {
		printf(" Non Emergency Doctor. \n");
	}
}
void listOutDeptsWithIds() {
	printf("Enter '1' for Pediatrics\n");
	printf("Enter '2' for Internal Medicine\n");
	printf("Enter '3' for  Orthopedics\n");
	printf("Enter '4' for  Cardiology\n");
	printf("Enter '5' for  Neurology\n");
	printf("Enter '6' for  Oncology\n");
	printf("Enter '7' for Emergency Room\n");
	printf("Enter '8' for Testing Center\n");
	printf("Enter '9' for  Radiology\n");
	printf("Enter '10' for  Pharmacy\n");
	printf("Enter '11' for  Cafeteria\n");
	printf("Enter '12' for  Gift Shop\n");
	printf("Enter '13' for  Physical Therapy\n");
	printf("Enter '14' for  Occupational Therapy\n");
	printf("Enter '15' for  Speech Therapy\n");
}
void view(int i) {
	printf("Patient Id : %d\n",i);
	printf("Name : ");
	puts(patientStuctureArray[i].name);
	printf("Phone Number : %d \nAge : %d \n",patientStuctureArray[i].phone,patientStuctureArray[i].age);
	printf("Department : ");
	getDeptNameById(patientStuctureArray[i].department);
	showDeptRoute(patientStuctureArray[i].department);
}
void getDeptNameById(int i) {
	switch(i) {
		case 1:
			printf("Pediatrics\n");
			break;
		case 2:
			printf("Internal Medicine\n");
			break;
		case 3:
			printf("Orthopedics\n");
			break;
		case 4:
			printf("Cardiology\n");
			break;
		case 5:
			printf("Neurology\n");
			break;
		case 6:
			printf("Oncology\n");
			break;
		case 7:
			printf("Emergency Room\n");
			break;
		case 8:
			printf("Testing Center\n");
			break;
		case 9:
			printf("Radiology\n");
			break;
		case 10:
			printf("Pharmacy\n");
			break;
		case 11:
			printf("Cafeteria\n");
			break;
		case 12:
			printf("Gift Shop\n");
			break;
		case 13:
			printf("Physical Therapy\n");
			break;
		case 14:
			printf("Occupational Therapy\n");
			break;
		case 15:
			printf("Speech Therapy\n");
			break;
	}
}
void showDeptRoute(int i) {
	printf("\nRoute for ");
	getDeptNameById(i);
	floorNumber=(i-1)/3;
	doctor=(i-1)%3;
	printf("go to floor number %d and ",++floorNumber);
	if (floorNumber == 1) {
		if (doctor==0) {
			printf(" take the left corridor ");
		} else if (doctor==1) {
			printf(" take the right corridor ");
		} else if (doctor==2) {
			printf(" take the center corridor ");
		} else {
			printf(" Department not found on Floor 1 ");
		}
	} else if (floorNumber == 2) {
		if (doctor==0) {
			printf(" take the left corridor ");
		} else if (doctor==1) {
			printf(" take the right corridor ");
		} else if (doctor==2) {
			printf(" take the center corridor ");
		} else {
			printf(" Department not found on Floor 2 ");
		}
	} else if(floorNumber==3) {
		if (doctor==0) {
			printf(" take the left corridor ");
		} else if (doctor==1) {
			printf(" take the right corridor ");
		} else if (doctor==2) {
			printf(" take the center corridor ");
		} else {
			printf(" Department not found on Floor 3 ");
		}
	} else if(floorNumber==4) {
		if (doctor==0) {
			printf(" take the left corridor ");
		} else if (doctor==1) {
			printf(" take the right corridor ");
		} else if (doctor==2) {
			printf(" take the center corridor ");
		} else {
			printf(" Department not found on Floor 4 ");
		}
	} else if(floorNumber==5) {
		if (doctor==0) {
			printf(" take the left corridor ");
		} else if (doctor==1) {
			printf(" take the right corridor ");
		} else if (doctor==2) {
			printf(" take the center corridor ");
		} else {
			printf(" Department not found on Floor 5 ");
		}
	}
}