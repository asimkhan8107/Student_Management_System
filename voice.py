import datetime
import webbrowser  # To search web

import pyjokes
import pyttsx3  # text to speech converter module
import speech_recognition as sr  # using as we are aliasing speech_recognition to sr
import os
import time     # related to delay etc..
def sptext():   #is a class of speech_recognozation
    recognizer = sr.Recognizer()      # recognizer is object of  class, 
                                      # from this statement we are calling recognizer
    with sr.Microphone() as source:   # further function we done using with for this take another object 
        print("Listening.......") 
        recognizer.adjust_for_ambient_noise(source) # To remove noise while recognizing from source
        audio = recognizer.listen(source)    # To listen the data
        try:
            print("Recognizing.......")
            data = recognizer.recognize_google(audio)  # To save the data
            print(data)
            return data
        except sr.UnknownValueErrorException:
            print("Not understand ")


# class for text to speech
def speechtx(x):
    engine = pyttsx3.init() # engine is object which accessing module
    voices = engine.getProperty('voices')        # to get voice property
    engine.setProperty('voice', voices[1].id)    # 0 is index for male voice and 1 for female 
    rate   = engine.getProperty('rate')          
    engine.setProperty('rate',130)               # to set property, speed is 150
    engine.say(x)                                # x is a variable
    engine.runAndWait()

if __name__ == '__main__':

    if "sara" in sptext().lower():
            while True:
                    data1=sptext().lower()
                    
                    if "your name" in data1:
                        name = "my name is sara"
                        speechtx(name)

                    elif "some answers" in data1:
                        answers = "Yes, please ask me your question"
                        speechtx(answers)

                    elif "about yourself" in data1:
                        yourself = "I am Voice Assistance developed by using python"
                        speechtx(yourself)

                    elif "made you" in data1:
                        made = "Asim khan made me just for his general project"
                        speechtx(made)    

                    elif "age" in data1:
                        age = "I am developed at 18 march 2023"
                        speechtx(age) 

                    elif 'time' in data1:
                        time = datetime.datetime.now().strftime("%I%M%p") # first datetime is module second datetime is function 
                                                                          # strftime is function for search in time 
                                                                          # I = Hours, M = Minute, p = pm/am
                        speechtx(time)   

                    elif 'date' in data1:
                        date = datetime.datetime.now().strftime("%d%B,%Y")
                        speechtx(date)    

                    elif 'youtube' in data1: 
                        webbrowser.open("https://www.youtube.com/")

                    elif 'insta' in data1:
                        webbrowser.open("https://www.instagram.com/")

                    elif 'spotify' in data1:
                        webbrowser.open("https://open.spotify.com/")

                    elif 'wiki' in data1:
                        webbrowser.open("https://www.wikipedia.org/")

                    elif 'whatsapp' in data1:
                        webbrowser.open("https://web.whatsapp.com/")        
                            
                    elif 'joke' in data1:
                        joke_1 = pyjokes.get_joke(language="en", category="neutral")
                        print(joke_1)
                        speechtx(joke_1)   

                    elif 'play song' in data1:
                        add = "D:\Song" 
                        listsong = os.listdir(add)   
                        #print (listsong)
                        os.startfile(os.path.join(add,listsong[0]))  

                    elif "exit" in data1:
                        speechtx("Thank You")
                        break

                    #time.sleep(5)  # 5 sec time delay   
    else:
        print("Thank You")
