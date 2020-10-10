# include <stdio.h>

int main() {

    int choice;
    float vel, dist, time;
    printf(" 1 for Velocity\n 2 for Distance\n 3 for time\n Please Enter What Do you want to find:\n");
    scanf("%d", &choice );

    if (choice == 1)
    {
        printf("please Enter Distance\n");
        scanf("%f", &dist);
        printf("Please Enter the Time\n");
        scanf("%f", &time);

        vel = dist / time;

        printf("the Velocity calculated on the given time and distance is: %f", vel);
    }

    if (choice == 2)
    {
        printf("Please Enter Veloctiy\n");
        scanf("%f", &vel);
        printf("please Enter the Time\n");
        scanf("%f", &time);

        dist = vel * time;
        
        printf("the distance calculated on the given time and velocity is: %f", dist);
    }

    if (choice == 3)
    {
        printf("Please Enter Distance\n");
        scanf("%f", &dist);
        printf("Please Enter the Velocity\n");
        scanf("%f", &vel);

        time = vel / dist;

        printf("Time taken to reach the following distance by the the give velocity is: %f",time);
    }
    
    
    

    return 0;
}