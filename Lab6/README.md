# ChatBot

*A lab report by Bo Fang*

## In this Report

To submit your lab, fork [this repository](https://github.com/FAR-Lab/IDD-Fa18-Lab6). You'll need to upload any code you change into your fork, as well as upload a video of a friend or classmate using your chatbot.

## Make the ChatBot your own

**Describe what changes you made to the baseline chatbot here. Don't forget to push your modified code to this repository.**

**I made an Insomnia bot. I just updated the sentences of chat bot, tried to lead the user to last hint: count 1 to 1000. By making them feel boring to help them fall asleep :)**

```
  /// These are the main statments that make up the conversation.
  if (questionNum == 0) {
    answer = 'Hello ' + input + ' :-)'; // output response
    waitTime = 5000;
    question = 'What\'s the time now?'; // load next question
  } else if (questionNum == 1) {
    answer = 'Really, It\'s already ' + input + ' ? So that means you don\'t have much time to sleep tonight...'; // output response
    waitTime = 5000;
    question = 'What\'s the last time you had a good sleep?'; // load next question
  } else if (questionNum == 2) {
    answer = 'Since ' + input + ' ? That is really a long time ago.';
    waitTime = 5000;
    question = 'Oh btw, whats your favorite color?'; // load next question
  } else if (questionNum == 3) {
    answer = 'Ok, ' + input + ' it is.';
    socket.emit('changeBG', input.toLowerCase());
    waitTime = 5000;
    question = 'Do you want me to help you out?'; // load next question
  } else if (questionNum == 4) {
    if (input.toLowerCase() === 'yes' || input === 1) {
      answer = 'Perfect!';
      waitTime = 5000;
      question = 'So there is a easy way......want to know what it is?';
    } else if (input.toLowerCase() === 'no' || input === 0) {
      socket.emit('changeFont', 'white'); /// we really should look up the inverse of what we said befor.
      answer = ''
      question = 'U sure? I\'m really good at it. Do you want me to help you out?';
      waitTime = 0;
      questionNum--; // Here we go back in the question number this can end up in a loop
    } else {
      question = 'Do you want me to help you out?'; // load next question
      answer = 'I did not understand you. Could you please answer "yes" or "no"?'
      questionNum--;
      waitTime = 5000;
    }
    // load next question
  } else {
    answer = 'Now try to count from 1 to 1000'; // output response
    waitTime = 0;
    question = '';
  }

```

## Record someone trying out your ChatBot

**Using a phone or other video device, record someone trying out your ChatBot. Upload that video to this repository and link to it here!**

**[Link](https://youtu.be/vAEi6xt-EIg)**

---
Starter code by [David Goedicke](mailto:da.goedicke@gmail.com), closely based on work by [Nikolas Martelaro](mailto:nmartelaro@gmail.com) and [Captain Anonymous](https://codepen.io/anon/pen/PEVYXz), who forked original work by [Ian Tairea](https://codepen.io/mrtairea/pen/yJapwv).
