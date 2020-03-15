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

    struct Foot
    {
        void stepForward()
        {

        }
        int stepSize()
        {
            return{};
        }
    };
    void run(int howFast, bool startWithLeftFoot);

    Foot leftFoot, rightFoot;
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
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize(); 
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

    struct Membership
    {
        
        void enterPerson()
        {

        }
        void declinePerson()
        {

        }
    };
    
    void goToGym(bool member, int daysPerWeek);
    
    Membership enter, decline;
};

void GymPlan::goToGym(bool member, int daysPerWeek)
{
    if(member == true)
    {
        enter.enterPerson();
    }
    else
    {
        decline.declinePerson();
    }
}
/*
 2)
 */
struct DogWalkerPlan
{
    int daysPerWeek = 3;
    float milesPerWalk = 2.5;
    bool dogClean = true;
    unsigned int timesWalked = 22;

    struct Dog
    {
        void walkDog()
        {

        }

        void washDog()
        {

        }
    };
    void exerciseDog(int breed);

    Dog walk, wash;
};
void DogWalkerPlan::exerciseDog(int breed)
{
    if(dogClean == true)
    {
        walk.walkDog();
    }
    else 
    {
        wash.washDog();
    }
}
/*
 3)
 */
struct DjMix
{
    bool inSync = true;
    int slotHrs = 3;

    unsigned int timesPlayed = 4;

    struct PlayButton
    {
        void pressPlay()
        {

        }
        void pressTempo()
        {

        }
    };
    void playDj(int slotHrs);
    
    PlayButton mix, tempo ;
};
void DjMix::playDj(int slotHrs)
{
    if(inSync == true)
    {
        mix.pressPlay();
    }
    else
    {
        tempo.pressTempo();
    }
}
/*
 4)
 */
struct KaratePractice
{
    int timeSlot = 1;
    int location =4;
    bool isBoxing = false;

    unsigned int numberOfStudents = 8;

    struct StudentLesson
    {
     void takeLesson()
     {

     }
     void posponeLesson()
     {

     }   
    };

    void practiceKarate(int timeSlot, int location);

    StudentLesson karate, boxing;
};
void KaratePractice::practiceKarate(int timeSlot, int location)
{
    if(isBoxing == false)
    {
        karate.takeLesson();
    }
    else
    {
        boxing.posponeLesson();
    }
}
/*
 5)
 */
struct DrivingLesson
{
    bool hasKey = true;
    int location = 1;

    unsigned int numberOfStudents  = 7;

    struct Exelerater
    {
       void drive()
       {

       } 
       void reverse()
       {

       }
    };

    void takeLesson(int location);

    Exelerater fast, slow;
};
void DrivingLesson::takeLesson(int location)
{
    if(hasKey == true)
    {
        fast.drive();
    }
    else
    {
        slow.reverse();
    }
}
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
        void brush()
        {

        }
        void fishFood()
        {

        }
    };

    void attendFish(int dayOfWeek);

    FishDetails clean, feed;
};
void FishCareRoutine::attendFish(int dayOfWeek)
{
    if(dayOfWeek == 2)
    {
        clean.brush();
    }
    else
    {
        feed.fishFood();
    }
}
/*
 7)
 */
struct SaladPrepList
{
    bool haveBowl = true;
    bool haveSpoon = true;

    int time  = 12;

    struct Chef
    { 

        void stirFast()
        {

        }
        void stirSlow()
        {

        }
    };
    void prepareSalad(int time);

    Chef spoon, whisk;
};
void SaladPrepList::prepareSalad(int time)
{
    if(haveBowl == true)
    {
        spoon.stirFast();
    }
    else
    {
        whisk.stirSlow();
    }
}
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
        void registerCustomer()
        {

        }
        void customerCare()
        {

        }
    };

    void makeSite(int type);

    Company gcom, xcom;
};
void MakeWebsite::makeSite(int type)
{
    if(type == 1)
    {
        gcom.registerCustomer();
    }
    else
    {
        xcom.customerCare();
    }

}
/*
 9)
 */
struct JourneyPlan
{
    int depature = 4;
    int arrival = 1;

    bool availableSeats = true;

    struct Passenger
    {
        void sitPassanger()
        {

        }
        void rebookPassenger()
        {

        }

    };

    void travel(int departure, int arrival);

    Passenger greet, appologise;
};
void JourneyPlan::travel(int departure, int arrival)
{
    if(availableSeats == true)
    {
        greet.sitPassanger();
    }
    else
    {
        appologise.rebookPassenger();
    }
}
/*
 10)
 */
struct Party
{
    int location = 1;
    int time = 8;
    bool booking = true;

    struct People
    {
        void seatCustomers()
        {

        }
        void customersWait()
        {

    void greetCustomers(int location, int time);
    
    Party bbq, evening;
};

void Party::greetCustomers(int location, int time)
{
    if(booking == true)
    {
        bbq.seatCustomers();
    }
    else
    {
        evening.customerWait();
    }
}

