
 /*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main function at the bottom of that file,

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

 send me a DM to check your pull request

 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT() { a = 0; }             //1) the constructor
    void printThing()            //the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
    }
};

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
}

//insert Example::main() into main() of user's repo.



/*
 */
#include<iostream>
struct MidiKeyboard
{
    int keys = 88;
    bool pitchWheel = true;
    bool modWheel = true;
    bool keyPressed = false;
    
    void playMidiNotes(bool keyPressed);
    void changePitch(bool pitchWheel);
    void controlMacros(bool modWheel);
    MidiKeyboard() { keys = 49; }
    void amendKeys()
    {
      std::cout << "please type new amount of keys" << std::endl;
      std::cin >> keys;
      
      std::cout << keys << " is the amount of keys you typed " << std::endl;
    }
};

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
    std::string manufacturer = "akai";
    bool neck = true;
    int strings = 6;
    bool strum;
    bool muted;
    std::string newMake;
    Guitar() { manufacturer = "akai"; }
    int playNote(bool strum);
    void playChord(int stringNumber, bool strum); 
    void playMuted(bool muted, bool strum);
    void printMake()
    {
        std::cout << "Please type guitars manufacturer" << std::endl;
        std::cin >> newMake;
        manufacturer = newMake;
        std::cout << manufacturer << " is the manufacturer of this guitar." << std::endl;    
    }
};

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
    bool screen = true;
    bool buttons = true;
    bool mic = true;
    bool speaker = true;
    std::string brand = "sony";
    std::string newPhoneBrand;
    MobilePhone() { brand = "sony"; } 
    void makeCall(bool buttons, bool mic);
    void answerCall(bool buttons, bool mic);
    void sendText(bool screen, bool buttons);

    int welcomeOs()
    {
        std::cout << "What brand is our phone ? " << std::endl;
        std::cin >> newPhoneBrand;
        brand = newPhoneBrand;
        std::cout << "Welcome to " << brand << std::endl;
        return newPhoneBrand == brand;
    }
};

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
    Game(){}
    void play(int players);
    void pause(bool objects);
    void exit()
    {
        std::cout << players << " players end game " << std::endl;
    }
};

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
    std::string pluginName = "massive";
    Daw() {}
    float recordMidi(bool plugins, int midiTracks);
    float recordAudio(int audioTracks, bool stereoInput);
    float outputAudio(bool stereoOutput);
    
    void pluginDetails()
    {
        std::cout << " tell me the plugins name ..." << std::endl;
        std::cin >> pluginName;
        std::cout << pluginName << " is the plugin you are using. " << std::endl;
    }
};

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
    Laptop() {}
    void receiveInput(bool keyboard, std::string password, int memoryGb);
    float produceOutput(bool screenResolution, int memoryGb);
    float saveData(int hardDriveAvailableGb);
    void hardDriveDetails()
    {
        std::cout << hardDriveAvailableGb << " Giga Bytes HD storage. " << std::endl;
        if(hardDriveAvailableGb < 512)
        {
            std::cout << "you have used " << hardDriveUsed << " Giga Bytes of storage space." << std::endl; 
        }
        else
        {
            std::cout << "you have used no hard drive space" << std::endl;
        }    
    }
};

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
    int timeToRecord;
    Television() {}
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
    void recordTimer()
    {
        std::cout << "PLease tell me the time in 24h you wish to record" << std::endl;
        std::cin >> timeToRecord;
        std::cout << " Timer set for " << timeToRecord << "hr " << std::endl;
    }
    
    RemoteControl controlOff;
    RemoteControl controlOn;
};

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
#include<iostream>

struct FishTank
{
    float waterTempCelcius = 25.0f;
    int heightCm = 30;
    int lengthCm = 90;
    int gallons = 50;
    bool lightOn = true;
    FishTank(){}
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
    void switchHeaterOn(float waterTempCelcius);
    void feedFish(int gallons);
    void printTemp()
    {
      std::cout << waterTempCelcius << " is the current temperature in the Aquarium." << std::endl;    
    }
    Decor tropical, marine;
};

void FishTank::switchLightOn(bool lighting)
{
    lightOn = lighting;

    std::cout << "light is on" << std::endl;
}

void FishTank::switchHeaterOn(float waterTemprature)
{
    waterTempCelcius = waterTemprature;

    if(waterTempCelcius > 25.0f)
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
    int customers;
    Cinema() {}

    int customerCount()
    {
        std::cout << "How many seats do you require?" << std::endl;
        std::cin >> customers;
        std::cout << customers << " is the amount of customers." << std::endl;
        
        return customers;
    }    
    
    int seatCounter()
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
};

struct Producer
{
    Guitar producersGuitar;
    MidiKeyboard producersKeyboard;
    Laptop producersLaptop;
    MobilePhone producersPhone;
    Daw producersDaw;
    std::string nameProducer;
    Producer(){}

    void playInstrument();
    void recordInstrument();
    void playbackRecording();
    void producersName()
    {
        std::cout << "type artists name." << std::endl;
        std::cin >> nameProducer;
        std::cout << nameProducer << " is the artists name !" << std::endl;
    }
};

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

    keyboard.amendKeys();


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

    multiplex.seatCounter();

    Producer artist;

    artist.producersName();

    Game currentGame;

    currentGame.exit();

    std::cout << "good to go !" << std::endl;
    
}


    




