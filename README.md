# Video Doorbell, Lab 7

*A lab report by Bo Fang*

### In This Report

1. Upload a video of your version of the camera lab to your lab Github repository
1. As usual, update your class Hub repository to add your [forked IDD-Fa18-Lab7](/FAR-Lab/IDD-Fa18-Lab7) repository.
1. Answer the questions in-line below on your README.md.

## Part A. HelloYou from the Raspberry Pi

[**a. Link to a video of your HelloYou sketch running.**](https://youtu.be/98VRsLkmiMY)

## Part B. Web Camera

**a. Compare `helloYou/server.js` and `IDD-Fa18-Lab7/pictureServer.js`. What elements had to be added or changed to enable the web camera? (Hint: It might be good to know that there is a UNIX command called `diff` that compares files.)**

It needs to create a Webcam instance from NodeWebcam.
And then when user click on takePicture, it calls NodeWebcam.capture and save the image with assigned name. Then show the image on the webapp.

**b. Include a video of your working video doorbell**

**[video](https://youtu.be/V_hujRKB2-Q)**

To make it work, we only need to call another take picutrue function when there is msg=="light"

```
// Read data that is available on the serial port and send it to the websocket
serial.pipe(parser);
parser.on('data', function(data) {
  console.log('Data:', data);
  io.emit('server-msg', data);
  if (data=="light") {
    var imageName = new Date().toString().replace(/[&\/\\#,+()$~%.'":*?<>{}\s-]/g, '');
    console.log('making a making a picture at'+ imageName);
    NodeWebcam.capture('public/'+imageName, opts, function( err, data ) {
      io.emit('newPicture',(imageName+'.jpg'));
    });
  }
});
```


## Part C. Make it your own

**a. Find, install, and try out a node-based library and try to incorporate into your lab. Document your successes and failures (totally okay!) for your writeup. This will help others in class figure out cool new tools and capabilities.**

**b. Upload a video of your working modified project**
