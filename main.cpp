 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */
struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        void rightFoot.stepForward();
        void leftFoot.stepForward();
    }
    int distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
}




 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


/*
 1)
 */
struct GymPlan
{
    bool member = true;
    int daysPerWeek = 4;
    
    unsigned int numMembers = 9;

    struct Person
    {
        int age = 30;
        int height = 6;
    
        void enterMember(int memberNumber);
    };
    
    void goToGym(Person person);
    
    Person gymPerson;
};
/*
 2)
 */
struct DogWalkerPlan
{
    int daysPerWeek = 3;
    float milesPerWalk = 2.5;

    unsigned int timesWalked = 22;

    struct Dog
    {
        int dogBreed = 4;
        int dogAge = 12;

        void washDog(int dogSoapType = 4);
    };
    void walkDog(Dog dog);

    Dog greatDane;
};
/*
 3)
 */
struct DjMix
{
    int timeSlot = 2;
    int slotHrs = 3;

    unsigned int timesPlayed = 4;

    struct DjStyle
    {
        bool isScratch = true;
        bool isTechno = true;
        void switchOnSystem(bool on = true);
    };
    void playDj(DjStyle djstyle);
    
    DjStyle technoDj;
};
/*
 4)
 */
struct KaratePractice
{
    int timeSlot = 1;
    int location =4;

    unsigned int numberOfStudents = 8;

    struct Student
    {
        int belt = 9;
        int yearsInClub = 2;
        
        void prepareGrading(bool prepared = true);
    };

    void practiceKarate(Student student);

    Student me;
};
/*
 5)
 */
struct DrivingLesson
{
    bool isCar = true;
    int location = 1;

    unsigned int numberOfStudents  = 7;

    struct Person
    {
        bool isFirstLesson = false;
        bool hasStudied = true;
        
        void prepareVehicle(bool keyTurned = true);
    };

    void takeLesson(Person person);

    Person gez;
};
/*
 6)
 */
struct FishCareRoutine
{
    int dayOfWeek = 2;
    float timeOfDay = 12;

    unsigned int fishTanks = 12;

    struct FishDetails
    {
        bool isMarine = true;
        bool isTropical = false;
        int tankSize = 100;

        void prepareEquiptment(int brushType = 1);
    };

    void attendFish(FishDetails fishDetails);

    FishDetails tigerFish;
};
/*
 7)
 */
struct SaladPrepList
{
    bool haveBowl = true;
    bool haveSpoon = true;

    unsigned int time  = 12;

    struct Ingredients
    {
        bool strawberry = true;
        bool celery = false;
        int extraFruit = 4;

        void mixIngredients();
    };

    void prepareSalad(Ingredients);

    Ingredients celerySalad;
};
/*
 8)
 */
struct MakeWebsite
{
    int type = 1;
    int size = 4;
    
    unsigned int customersServed = 30;

    struct Company
    {
        int users = 1;
        double customers = 100000;

        void registerCustomer();
    };

    void makeSite(Company company);

    Company gcom;
};
/*
 9)
 */
struct JourneyPlan
{
    int depatureLocation = 4;
    int arrivalLocation = 1;

    unsigned int availableSeats = 6;

    struct Passenger
    {
        bool isFrequentFlyer = true;
        int seatNumber = 22;

        void sitPassanger();

    };

    void travel(Passenger passenger);

    Passenger me;
};
/*
 10)
 */
struct Party
{
    int location = 1;
    int time = 8;
    
    unsigned int previousParties = 0;

    struct People
    {
        int amount = 20;
        bool specialBooth = true;

        void seatCustomers();
    };

    void haveParty(People people);

    People all;
};
#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
