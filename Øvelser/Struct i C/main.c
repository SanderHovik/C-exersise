
#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int citNo;
  float salary;
} person1,person5;

int main() {

  printf("Enter information:\n");
    printf("Enter name: ");
    fgets(person1.name, sizeof(person1.name), stdin);

    printf("Enter citNo number: ");
    scanf("%d", &person1.citNo);
    printf("Enter salary: ");
    scanf("%f", &person1.salary);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", person1.name);
    printf("citNo number: %d\n", person1.citNo);
    printf("salary: %.1f\n", person1.salary);

  return 0;
}
