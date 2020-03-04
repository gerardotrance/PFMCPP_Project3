/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    make the member variables have names that are related to type of work the UDT would perform.
    see the example below for clarity on this instruction
 
 2) give the member variables relevant data types
 
 3) add at least 2 member functions to each of your 10 types.  
    make the function parameter list for those member functions use some of your User-Defined Types
    You'll write definitions in part2 for these functions
    you'll call each of these functions in part3
 
 4) make 2 of the 10 user-defined types have a nested class.  this nested class also needs member functions.
 
 5) One of your 10 UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:
 */
//1) a U.D.T. with a random number of member variables
struct CarWash           
{
    //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6;
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };
    
    //3) member function with a user-defined type as the parameter.
    //The user-defined type parameter happens to be the nested class.
    void washAndWaxCar( Car car );           
    
    //5) a member variable whose type is a UDT.
    Car myCar;  
};


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
