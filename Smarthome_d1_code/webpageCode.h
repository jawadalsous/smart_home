const char webpageCode[] =
  R"=====(
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="icon" href="data:,">
<style>
body {font-family: Arial;}
/* Style the tab */
.tab {
  overflow: hidden;
  border: 1px solid #ccc;
  background-color: #00c0ff;
}

/* Style the buttons inside the tab */
.tab button {
  background-color: inherit;
  float: left;
  border: none;
  outline: none;
  cursor: pointer;
  padding: 14px 16px;
  transition: 0.3s;
  font-size: 12px;
}
/* Change background color of buttons on hover */
.tab button:hover {
  background-color: #aaa;
}
/* Create an active/current tablink class */
.tab button.active {
  background-color: #ccc;
}
/* Style the tab content */
.tabcontent {
  display: none;
  padding: 15px 12px;
  border: 8px solid #10d0ff;
  border-top: none;
}
html{
font-family: Helvetica;
display:inline-block;
margin: 0px auto;
text-align: center;
}
h1{
color: blue;
padding: 1vh;
}
p{
font-size: 1.0rem;
}
.button{
display: inline-block;
width: 75px;
height: 50px;
border-radius: 20px;
margin: 10px;
font-size: 10px;
cursor: pointer;
}
.button2:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24),0 17px 50px 0 rgba(0,0,0,0.19);
}
.button2{
background-color: #5013ff;
width: 65;
height: 40x;
margin:7px;
}
.button22:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24),0 17px 50px 0 rgba(0,0,0,0.19);
}
.button22{
background-color: #2ac3ff;
width: 65;
height: 40x;
margin: 7px;
}
.button3:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24),0 17px 50px 0 rgba(0,0,0,0.19);
}
.button3{
background-color: #0add9a;
}
.button32:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24),0 17px 50px 0 rgba(0,0,0,0.19);
}
.button32{
background-color: #8affaa;
}
.button4:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24),0 17px 50px 0 rgba(0,0,0,0.19);
}
.button4{
background-color: #00ff00;
}
.button42:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24),0 17px 50px 0 rgba(0,0,0,0.19);
}
.button42{
background-color: #ccfa4a;
}
.button5:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24),0 17px 50px 0 rgba(0,0,0,0.19);
}
.button5{
background-color: #ff1515;
style.color = "red";
}
.button6:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24),0 17px 50px 0 rgba(0,0,0,0.19);
}
.button6{
background-color: #abcdef;
width: 50px;
}
.button7:hover {
  box-shadow: 0 12px 16px 0 rgba(0,0,0,0.24),0 17px 50px 0 rgba(0,0,0,0.19);
}
.button7{
background-color: #fedcba;
width: 50px;
height: 50px;
margin: 15px;
font-size: 12px;
border-radius: 50px;
}
</style>
</head>
<body onload="init()">

<fieldset>
<strong>BA Tech web page to control with your smart home</strong>
</fieldset>

<div class="tab">
  <button class="tablinks" onclick="openCity(event, 'room 1')">room 1</button>
  <button class="tablinks" onclick="openCity(event, 'room 2')">room 2</button>
  <button class="tablinks" onclick="openCity(event, 'bedroom 1')">bedroom 1</button>
  <button class="tablinks" onclick="openCity(event, 'bedroom 2')">bedroom 2</button>
  <button class="tablinks" onclick="openCity(event, 'garden')">garden</button>
  <button class="tablinks" onclick="openCity(event, 'kitchen')">kitchen</button>
  <button class="tablinks" onclick="openCity(event, 'bathroom')">bathrooms</button>
</div>

<div id="room 1" class="tabcontent">
  <h3>Room 1</h3>
<button class="button button2" onclick="a()">room1 L1</button>
<button class="button button2" onclick="b()">room1 L2</button>
</div>

<div id="room 2" class="tabcontent"> 
  <h3>Room 2</h3>
<button class="button button22" onclick="c()">room2 L1</button>
<button class="button button22" onclick="d()">room2 L2</button>
<button class="button button22" onclick="e()">room2 L3</button>
<button class="button button22" onclick="f()">room2 L4</button>
</div>

<div id="bedroom 1" class="tabcontent">
  <h3>Bedroom 1</h3>
<button class="button button3 " onclick="g()">bed room1 L1</button>
<button class="button button3 " onclick="h()">bed room1 L2</button>
<button class="button button3 " onclick="i()">bed room1 L3</button>
</div>

<div id="bedroom 2" class="tabcontent">
  <h3>Bedroom 2</h3>
<button class="button button32 " onclick="j()">bed room2 L1</button>
<button class="button button32 " onclick="k()">bed room2 L2</button>
<button class="button button32 " onclick="l()">bed room2 L3</button>
</div>

<div id="garden" class="tabcontent">
<h3>Garden</h3>
<button class="button button4 " onclick="m()">garden L1</button>
</div>
<div id="kitchen" class="tabcontent">
<h3>Kitchen</h3>
<button class="button button42 " onclick="n()">kitchen L1</button>
</div>

<div id="bathroom" class="tabcontent">
  <h3>Bathroom</h3>
  <button class="button button6 " onclick="o()">toilet1 L1</button>
  <button class="button button6 " onclick="p()">toilet1 L2</button>
  <button class="button button6 " onclick="q()">toilet2</button>
  <button class="button button6 " onclick="r()">bathroom</button>
</div>
  <h3>electrical fues</h3>
  <button class="button button5 " onclick="s()">water heater</button>
  <br>
  <button class="button button5 " onclick="t()">condition 1</button>
  <a href="/off"><button class="button button7">off</button></a>
  <button class="button button5 " onclick="u()">condition 2</button>

  <script>
function openCity(evt, cityName) {
  var i, tabcontent, tablinks;
  tabcontent = document.getElementsByClassName("tabcontent");
  for (i = 0; i < tabcontent.length; i++) {
    tabcontent[i].style.display = "none";
  }
  tablinks = document.getElementsByClassName("tablinks");
  for (i = 0; i < tablinks.length; i++) {
    tablinks[i].className = tablinks[i].className.replace(" active", "");
  }
  document.getElementById(cityName).style.display = "block";
  evt.currentTarget.className += " active";
}
        document.addEventListener('contextmenu', event => {
            event.preventDefault();
        });

                function absorbEvent_(event) {
      var e = event || window.event;
      e.preventDefault && e.preventDefault();
      e.stopPropagation && e.stopPropagation();
      e.cancelBubble = true;
      e.returnValue = false;
      return false;
    }

    function preventLongPressMenu(node) {
      node.ontouchstart = absorbEvent_;
      node.ontouchmove = absorbEvent_;
      node.ontouchend = absorbEvent_;
      node.ontouchcancel = absorbEvent_;
    }

    function init() {
      preventLongPressMenu(document.getElementById('theimage'));
    }
        GetSwitchState();
  
// let aLink = document.getElementsByTagName('a');
// for (var i = 0; i < aLink.length; i++) {
//   aLink[i].addEventListener("click", event=>{
//   event.preventDefault();
// });
// }
function a() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/a1", true);
              xhr.send();
            }
function b() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/b1", true);
              xhr.send();
            }
function c() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/c1", true);
              xhr.send();
            }
function d() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/d1", true);
              xhr.send();
            }
function e() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/e1", true);
              xhr.send();
            }
function f() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/f1", true);
              xhr.send();
            }
function g() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/g1", true);
              xhr.send();
            }
function h() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/h1", true);
              xhr.send();
            }
function i() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/i1", true);
              xhr.send();
            }
function j() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/j1", true);
              xhr.send();
            }
function k() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/k1", true);
              xhr.send();
            }
function l() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/l1", true);
              xhr.send();
            }
function m() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/m1", true);
              xhr.send();
            }
function n() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/n1", true);
              xhr.send();
            }
function o() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/o1", true);
              xhr.send();
            }
function p() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/p1", true);
              xhr.send();
            }
function q() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/q1", true);
              xhr.send();
            }
function r() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/r1", true);
              xhr.send();
            }
function s() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/s1", true);
              xhr.send();
               document.getElementsByClassName("button5")[0].style.backgroundColor = "green";
            }
function t() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/t1", true);
              xhr.send();
              document.getElementsByClassName("button5")[1].style.backgroundColor = "green";
            }
function u() {
              var xhr = new XMLHttpRequest();
              xhr.open("GET", "/u1", true);
              xhr.send();
              document.getElementsByClassName("button5")[2].style.backgroundColor = "green";
            }
		</script>
</body>
</html>
)=====";