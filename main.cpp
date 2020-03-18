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

void Person::run(int, bool startWithLeftFoot)
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

 /*
GymPlan:
    Has list of people signed up
    can add people to list
    can remove people from list
 */

#include <vector>

struct GymPlan
{
    int daysPerWeek = 4;
    bool canAccessPool = true;
    bool canBringGuests = true;
    bool canAccessSpa = true;
    
    std::vector<Person> members; //Has list of people signed up
    void addMember(Person p);       //can add people to list
    void removeMember(Person p);    //can remove people from list
};

void GymPlan::addMember(Person)
{
   
}
void GymPlan::removeMember(Person)
{
    
}

/*
 2)

times walked per week
Notifies walker to start dog walk

can either jog with the dogs or just walk them
has a list of dogs to walk
option to feed dog

 
 */

struct Dog
{
    bool needsFeeding = false;
};


struct DogWalkerPlan
{
    //times walked per week
    int timesWalkedWeekly = 1;
    //can either jog with the dogs or just walk them
    bool involvesJogging = true;
    
    std::vector<Dog> dogsToWalk; //has a list of dogs to walk
    
    //Notifies walker to start dog walk
    void notifyWalker();
    
    //option to feed dog
    bool shouldFeedDogs = true;
    void feedDog(int whichDogToFeed);
    void feedAllDogs();
};

void DogWalkerPlan::feedDog(int)
{

}
void DogWalkerPlan::feedAllDogs()
{

}
/*
 3)
3 things it can do:
    1) play
    2) stop
    3) sync tempo

5 properties:
    1)length in  minutes
    2)music type
    3)volume level
    4)tempo
    5)key
 */
 
struct DjMix
{
    int lengthMins = 60;
    int volumedB = 0;
    int tempoBpm = 120;
    int key = 1;
    
    void playMix();
    
    void syncMixTempo();
    
    void stopMix();


};

void DjMix::playMix()
{

}
void DjMix::syncMixTempo()
{

}
void DjMix::stopMix()
{

}
/*
 4)
 3 things it can do:
    1)start practice
    2)end practice
    3)update belt

5 properties:
    1)style of karate
    2)type of belt
    3)session length
    4)is introductory session
    5)location number
 */
struct KaratePractice
{
    bool isIntroductorySession = false;
    bool isStyleOfKarate = true;
    int sessionLengthMins = 60;
    int locationNumber = 2;
    int beltGrade = 4;

    void startPractice(bool isIntroductorySession, bool isStyleOfKarate, int sessionLengthMins, int locationNumber);
    
    void endPractice();
    
    void updateBelt(int beltGrade);

    
};

void KaratePractice::startPractice(bool, bool, int, int)
{

}
void KaratePractice::endPractice()
{

}
void KaratePractice::updateBelt(int)
{

}
/*
 5)
3 things it can do:
    1)start lesson
    2)end lesson
    3)pass student

5 properties:
    1)is car
    2)is motorbike
    3)is first lesson
    4)is last lesson
    5)is motorway special course
 */
struct DrivingLesson
{
    bool isCar = true;
    bool isMotorBike = false;
    bool isFirstLesson = false;
    bool isLastLesson = false;
    bool isSpecialCourse = true;
    bool hasPassed = true; 
    
    void startLesson(bool isCar, bool isMotorBike, bool isFirstLesson, bool isLastLesson, bool isSpecialLesson);

    void endLesson();

    void passStudent(bool hasPassed);

    struct Saftey
    {
        void wearHelmet()
        {

        }
        void wearSeatbelt()
        {

        }
    };
        Saftey driver, rider;
};

void DrivingLesson::startLesson(bool, bool, bool, bool, bool)
{
        if(isMotorBike== true)
        {
            rider.wearHelmet();
        }
        else
        {
            driver.wearSeatbelt();
        }
}
void DrivingLesson::endLesson()
{

}
void DrivingLesson::passStudent(bool)
{

}
/*
 6)
3 things it can do:
    1)feed fish
    2)clean fish
    3)special full service

5 properties:
    1)is marine
    2)is tropical
    3)is pond
    4)is coral
    5)is special
 */
struct FishCareRoutine
{
    bool isMarine = true;
    bool isTropical = true;
    bool isPond = false;
    bool isCoral = true;
    bool isSpecial = true;

    void feedFish();
    
    void cleanFish();
    
    void specialFullService(bool isSpecial);

    struct UvLight
        {
            void lightOn()
            {

            }
            void noLight()
            {

            }
        };
        
        UvLight present, abcent;
};

void FishCareRoutine::feedFish()
{

}
void FishCareRoutine::cleanFish()
{

}
void FishCareRoutine::specialFullService(bool)
{
        if(isSpecial==true)
        {
            present.lightOn();
        }
        else
        {
            abcent.noLight();
        }
}
/*
 7)
3 things it can do:
    1)prepare salad
    2)make salad
    3)serve salad

5 properties:
    1)is vegan
    2)has nuts
    3)contains meat
    4)bowl size number
    5)dressing type
 */
struct SaladPreper
{
    bool isVegan = true;
    bool hasNuts = false;
    bool containsMeat = false;
    int bowlSizeNo = 1;
    int dressingType = 2;

    void prepareSalad(bool isVegan, bool hasNuts, bool containsMeat );
    
    void makeSalad(int dressingType);
    
    void serveSalad(int bowlSizeNo);

};
void SaladPreper::prepareSalad(bool, bool, bool)
{

}
void SaladPreper::makeSalad(int)
{

}
void SaladPreper::serveSalad(int)
{

}
/*
 8)
3 things it can do:
    1)design website
    2)price website
    3)make website

5 properties:
    1)has pay service
    2)has facebook
    3)has video
    4)has member login
    5)is free
 */
struct WebsiteDeveloper
{
    bool hasPaymentApi = true;
    bool hasFacebookApi = false;
    bool hasVideo = true;
    bool hasMemberAccounts = true;
    bool isFree = false;

    void designWebsite(bool hasPaymentApi, bool hasFacebookApi, bool hasVideo, bool hasMemberAccounts);

    void priceWebsite(bool isFree);

    void makeWebsite();
};
void WebsiteDeveloper::designWebsite(bool, bool, bool, bool)
{

}
void WebsiteDeveloper::priceWebsite(bool)
{

}
void WebsiteDeveloper::makeWebsite()
{

}
/*
 9)
3 things it can do:
    1)add events to journey
    2)reschedule departure
    3)cancel journey 

5 properties:
    1)departure time
    2)departure location
    3)arrival time 
    4)arrival location
    5)has guest
 */
struct JourneyPlan
{
    float departureTime = 20.30f;
    int depatureLocation = 2;
    float arrivalTime = 23.00f;
    int arrivalLocation = 4;
    bool hasGuest = false;

    void addEventToJourney();

    void rescheduleDeparture();

    void cancelJourney();  
};

void JourneyPlan::addEventToJourney()
{

}
void JourneyPlan::rescheduleDeparture()
{

}
void JourneyPlan::cancelJourney()
{

}
/*
 10)
3 things it can do:
    1)books party
    2)cancels booking
    3)reschedules booking

5 properties:
    1)number of guests
    2)includes band
    3)includes food
    4)includes drink
    5)includes dj
 */
 struct Party{ };

int body()
{
    Party party;

    return 0;
}


#include <iostream>
int main()
{
    std::cout << "go to go!" << std::endl;
}
