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
    
};

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
    
};
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
    
};

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
    
};

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
struct SaladPrepList
{
   
};

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
    
};

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
    
};

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
struct Party
{
    
};


#include <iostream>
int main()
{
    std::cout << "go to go!" << std::endl;
}
