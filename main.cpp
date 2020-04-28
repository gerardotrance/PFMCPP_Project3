/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to your types. 
 
 2) use while() or for() loops to do something interesting inside these new member functions.
         a) for example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example {
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //3), 4c) 
    {
        Bar bar(startingVal);                //4a)
        while( bar.num < threshold )         //4a) 
        { 
            bar.num += 1;                    //4a)
            
            if( bar.num >= threshold )       //4b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //5) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //6) 
    return 0;
}
}

//call Example::main() in main()




/*
 */
#include<iostream>
struct MidiKeyboard
{
    int keys, pitch;
    bool pitchWheel, modWheel, keyPressed;

    void playMidiNotes(bool keyPressed);
    void changePitch(bool pitchWheel);
    void controlMacros(bool modWheel);
    void printKeys();

    MidiKeyboard()
    { 
        keys = 32;
        pitchWheel = true;
        modWheel = true;
        keyPressed = false;
        pitch = 0;
    }
};

void MidiKeyboard::printKeys()
{
    std::cout << keys << " keys available." << std::endl;
}

void MidiKeyboard::playMidiNotes(bool press)
{
    keyPressed = press;

    if(keyPressed == true)
    {
        std::cout << "key pressed" << std::endl;  
    }
    else
    {
        std::cout << "key not pressed" << std::endl;
    } 
}

void MidiKeyboard::changePitch(bool up)
{
    pitchWheel = up;
    
    if(pitchWheel == true)
    {
        std::cout << "pitch wheel" << std::endl;
    }
    else
    {
        std::cout << "no pitch wheel" << std::endl;
    }
}

void MidiKeyboard::controlMacros(bool macro)
{
    modWheel = macro;

    if(modWheel == true)
    {
        std::cout << "mod wheel" << std::endl;
    }
    else
    {
        std::cout << "no mod wheel" << std::endl;
    }
}

struct Guitar
{
    std::string manufacturer;
    bool neck;
    int strings;
    bool strum;
    bool muted;
    std::string newMake;
    Guitar();

    int playNote(bool strum);
    void playChord(int stringNumber, bool strum); 
    void playMuted(bool muted, bool strum);
    void printMake();
};

Guitar::Guitar():  manufacturer("gibson"), strings(12), strum(false), muted(false), newMake("gibson"){}

void Guitar::printMake()
{
    std::cout << manufacturer << " is the make of this guitar." << std::endl;
}

int Guitar::playNote(bool strumming) 
{
    strum = strumming;
    
    if(strings > 0)
    {
        return strings;
    }
    else
    {
        return 0;
    }
}

void Guitar::playChord(int stringNumber, bool strummingChord) 
{
    strings = stringNumber; 
    strum = strummingChord; 

    if(strings > 0 || strum == true) 
    {
        std::cout << "note played" << std::endl;
    }
    else
    {
        strings = 0;
    }   
}

void Guitar::playMuted(bool muteHeld, bool strumming) 
{
    muted = muteHeld;
    strum = strumming;
    
    if(strings > 0 || strum == true || muted == true)
    {
        std::cout << "muted note played" << std::endl;    
    }
    else
    {
        strings = 0;
    }
}

struct MobilePhone
{
    bool screen;
    bool buttons;
    bool mic;
    bool speaker;
    std::string brand;
    MobilePhone();
    
    void makeCall(bool buttons, bool mic);
    void answerCall(bool buttons, bool mic);
    void sendText(bool screen, bool buttons);
    void welcomeOs();
};

MobilePhone::MobilePhone()
{
    screen = true;
    buttons = true;
    mic = true;
    speaker = true;
    brand = "sony";
}
void MobilePhone::welcomeOs()
{
    std::cout << brand << " is the phones brand." << std::endl;
}
void MobilePhone::makeCall(bool button, bool voice)
{
    buttons = button;
    mic = voice;

    std::cout << "Calling" << std::endl;
}

void MobilePhone::answerCall(bool button, bool audio)
{
    buttons = button;
    mic = audio;

    std::cout << "Answered Call" << std::endl;
}

void MobilePhone::sendText(bool image, bool text)
{
    screen = image;
    buttons = text;

    std::cout << "Text Sent" << std::endl;
}
/*
 */
struct Game
{
    int players = 2;
    int levels = 10;
    bool objects = true;
    bool enemies = true;
    int allies = 2;
    Game();
    
    void play(int players);
    void pause(bool objects);
    void exit();
};

Game::Game() : players(1), levels(12), objects(true), enemies(false), allies(1){}

void Game::exit()
{
    std::cout << levels << "th level. players end game." << std::endl;
}

void Game::play(int character)
{
    players = character;

    if(players == 1 || players == 2)
    {
        std::cout << "welcome player to the game" << std::endl;
    }
    else
    {
        std::cout << "choose players" << std::endl;
    }
}

void Game::pause(bool items)
{
    objects = items;

    std::cout << "Game Paused" << std::endl;
}
/*
 */
struct Daw
{
    int audioTracks =16;
    int midiTracks = 16;
    bool plugins = true;
    bool stereoOutput = true;
    bool stereoInput = true;
    std::string pluginName = "spire";
    Daw(){}
    
    float recordMidi(bool plugins, int midiTracks);
    float recordAudio(int audioTracks, bool stereoInput);
    float outputAudio(bool stereoOutput);
    void pluginDetails();
};

void Daw::pluginDetails()
{
    std::cout << pluginName << " is your selected plugin." << std::endl;
}

float Daw::recordMidi(bool presentPlugin , int midi)
{
    plugins = presentPlugin;
    midiTracks = midi;

    return(midiTracks);
}

float Daw::recordAudio(int audio, bool stereo)
{
    audioTracks = audio;
    stereoInput = stereo;

    return(stereoOutput);   
}

float Daw::outputAudio(bool output)
{
    stereoOutput = output;

    if(stereoOutput == true)
    {
        return audioTracks;
    }
    {
        return 0;
    }
}

#include <string>
struct Laptop
{
    int screenResolution = 4000;
    bool keyboard = true;
    std::string password = "password";
    int hardDriveAvailableGb = 256;
    int hardDriveUsed = 512 - hardDriveAvailableGb;
    int memoryGb = 8;
    Laptop();
    
    void receiveInput(bool keyboard, std::string password, int memoryGb);
    float produceOutput(bool screenResolution, int memoryGb);
    float saveData(int hardDriveAvailableGb);
    void hardDriveDetails();
};

Laptop::Laptop()
{
    screenResolution = 8000;
    keyboard = true;
    password = "new password";
    hardDriveAvailableGb = 512;
    hardDriveUsed = 100;
    memoryGb = 16;    
}

void Laptop::hardDriveDetails()
{
    std::cout << hardDriveAvailableGb << " Giga Bytes HD storage." << std::endl;
    if(hardDriveAvailableGb < 512)
    {
        std::cout << "you have used " << hardDriveUsed << " Giga Bytes of storage space." << std::endl;
    }
    else
    {
        std::cout << "you have used no hard drive space." << std::endl;
    }  
}

void Laptop::receiveInput(bool keyboardInput, std::string user, int RAM)
{
    keyboard = keyboardInput;
    password = user;
    memoryGb = RAM;

    if(password == "password")
    {
        std::cout << "welcome user" << std::endl;
    }
    if(password != "password")
    {
        std::cout << "incorrect password" << std::endl;
    }
    else
    {
        std::cout << "enter password" << std::endl;
    }
}

float Laptop::produceOutput(bool graphics, int RAM)
{
    screenResolution = graphics;
    memoryGb = RAM;

    return(memoryGb);
}

float Laptop::saveData(int storage)
{ 
    hardDriveAvailableGb = storage;

    return(hardDriveAvailableGb);
}
/*
 */
struct Television
{
    bool flatScreen = true;
    bool surroundSound = true;
    int heightCm = 60;
    int tvChannel = 1;
    bool onButton = true;
    Television();
    
    struct RemoteControl
    {
        int numberButtons = 10;
        bool channelUp;
        bool channelDown;
        
        void pressButton();
    };
    
    void switchTvOn(bool onButton);
    void switchTvOff(bool onButton);
    int changeTvChannel(int tvChannel);
    void recordTimer();
};

Television::Television() : tvChannel(2){}

void Television::recordTimer()
{
    std::cout << "Channel " << tvChannel << " set to record." << std::endl;
}

void Television::switchTvOn(bool status)
{
    onButton = status;

    if (onButton == true)
    {
        std::cout << "button pressed" << std::endl;
    }
      
    else
    {
        std::cout << "button ready" << std::endl;
    }
}

int Television::changeTvChannel(int frequency)
{
    tvChannel = frequency; 
    
    std::cout << "T.V Channel" << std::endl;
    
    return tvChannel; 
}

void Television::switchTvOff(bool status)
{
    onButton = status;

    if (onButton == false)
    {
        std::cout << "television off" << std::endl;
    }
}
/*
 */

struct FishTank
{
    int waterTempCelcius = 25;
    int heightCm = 30;
    int lengthCm = 90;
    int gallons = 50;
    bool lightOn = true;
    FishTank();
    
    struct Decor
    {
        bool livePlants = true;
        int numberOfPlants = 6;
        bool corals = false;
        int numberOfCorals = 0;
        bool rocks = true;
        int numberOfRocks = 5;
        
        void cleanDecor();
    };

    void switchLightOn(bool lightOn);
    void switchHeaterOn(int waterTempCelcius);
    void feedFish(int gallons);
    void printTemp();
    int tempAlert();

    Decor tropical, marine;
};

FishTank::FishTank() : waterTempCelcius(24), gallons(75){}

int FishTank::tempAlert()
{
    while(waterTempCelcius < 30)
    {
        std::cout << "temperature too low " << waterTempCelcius << " degrees celcius"  << std::endl;
        waterTempCelcius += 1;
    }
    while(waterTempCelcius == 30)
    {
        std::cout << "safe water temperature " << waterTempCelcius << " degrees celcius" << std::endl;
        return 0;
    }
    return waterTempCelcius;
}
void FishTank::printTemp()
{
    std::cout << waterTempCelcius << " is the current temperature in the Aquarium." << std::endl;
}

void FishTank::switchLightOn(bool lighting)
{
    lightOn = lighting;

    std::cout << "light is on" << std::endl;
}

void FishTank::switchHeaterOn(int waterTempCelcius)
{
    if(waterTempCelcius > 25)
    {
        std::cout << "Marine Aquarium" << std::endl;
    }
      
    else
    {
        std::cout << "Tropical Aquarium" << std::endl;
    }
}

void FishTank::feedFish(int aquariumSize)
{
    gallons = aquariumSize;

    if(gallons <= 50)
    {
        std::cout << "feed fish once a week" << std::endl;  
    }
    if(gallons <= 100 || gallons > 50)
    {
        std::cout << "feed fish twice a week" << std::endl;
    }
    else
    {
        std::cout << "feed fish at least three times a week" << std::endl;
    }        
}

struct Cinema
{
    int seats = 100;
    int freeSeats = 100;
    int lightLevel = 10;
    float movieTime24hr = 20.30f;
    int customers = 33;
    Cinema();

    int customerCount();
    int seatCounter();
    void seatCountdown();
};
Cinema::Cinema() : seats(100){}

int Cinema::customerCount()
{
    std::cout << customers << " is the amount of customers." << std::endl;
        
    return customers;
}    
    
int Cinema::seatCounter()
{
    if(customers <= 100)
    {   
        std::cout << freeSeats - customers << " is now the number of free seats." << std::endl;
    }
    if(customers >= 101)
    {
        std::cout << customers - 100 << " too many people." << std::endl; 
    }
        
    return 0;
}

void Cinema::seatCountdown()
{
    while(seats > 0)
    {
        std::cout << seats << " seats left!" << std::endl;
        --seats;
    }
    while(seats <= 0)
    {
        std::cout << " all seats gone " << std::endl;
        ++seats;
        seats = 100;
    }
}

struct Producer
{
    Guitar producersGuitar;
    MidiKeyboard producersKeyboard;
    Laptop producersLaptop;
    MobilePhone producersPhone;
    Daw producersDaw;
    std::string nameProducer = " Dj Tempo ";
    Producer();

    void playInstrument();
    void recordInstrument();
    void playbackRecording();
    void producersName();
};

Producer::Producer() : nameProducer(" House Cat"){}

void Producer::producersName()
{
    std::cout << nameProducer << " is the artists name !" << std::endl;  
}

void Producer::playInstrument()
{
    std::cout << "producer playing instrument" << std::endl;   
}

void Producer::recordInstrument() 
{
    std::cout << "recording" << std::endl;
}

void Producer::playbackRecording()
{
    std::cout << "playing" << std::endl;
}

#include <iostream>
int main()
{
    Example::main();

    MidiKeyboard keyboard;

    keyboard.printKeys();

    Guitar makeOfGuitar;

    makeOfGuitar.printMake();

    MobilePhone phone;

    phone.welcomeOs();

    Daw cubase;

    cubase.pluginDetails();

    Laptop myLaptop;

    myLaptop.hardDriveDetails();

    Television myTelevision;

    myTelevision.recordTimer();

    FishTank aquarium;

    aquarium.printTemp();

    Cinema multiplex;

    multiplex.customerCount();

    Producer artist;

    artist.producersName();

    Game currentGame;

    currentGame.exit();

    std::cout << multiplex.seats << std::endl;

    std::cout << multiplex.movieTime24hr << std::endl;

    std::cout << aquarium.waterTempCelcius << std::endl;

    std::cout << aquarium.gallons << std::endl;

    std::cout << cubase.pluginName << std::endl;

    std::cout << cubase.audioTracks << std::endl;

    std::cout << "good to go !" << std::endl;

    Cinema seatcounter;

    seatcounter.seatCountdown();

    FishTank fishtemp;

    fishtemp.tempAlert();

    std::cout << fishtemp.waterTempCelcius << std::endl;



}


    




