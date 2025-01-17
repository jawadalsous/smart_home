# smart_home
Awesome SmartHome
🏠 Curated list of awesome SmartHome/Home Automation things.

Focusing on open technologies and solutions leaving users in control.

Table of Contents
Notable OpenSource Projects
Notable Commercial Systems
Home Automation Services
Voice/Personal Assistants
Video Surveillance
Related/Useful Services and Software
Dashboards
Floor Plans
Notable OpenSource Projects
Complete, self-hosted home automation systems with frontend, suitable for end users. At least a year in active development, at least 200 commits, at least 200 stars.

Home Assistant Site: https://home-assistant.io/, Stars: 39187 Language: Python
openHAB Site: http://www.openhab.org/, Stars: 3484, Language: Java
Domoticz Site: http://www.domoticz.com/, Stars: 2831, Language: C++
Gladys Site: https://gladysproject.com/, Stars: 1573, Language: JavaScript
pimatic Site: https://pimatic.org/, Stars: 579, Language: JavaScript
MajorDoMo Site: http://majordomohome.com/, Stars: 346, Language: PHP
Freedomotic Site: http://freedomotic.com/, Stars: 352, Language: Java
HomeGenie Site: http://homegenie.it/, Stars: 313, Language: C#
Jeedom Site: https://www.jeedom.com/site/en/, Stars: 327, Language: PHP
pilight Site: https://www.pilight.org/, Stars: 269, Language: C
FHEM Site: https://fhem.de/, Revisions: 23387, Language: Perl
MisterHouse Site: http://misterhouse.net/, Stars: 218, Language: Perl
Related awesome lists:

Awesome Home Assistant
Notable Commercial Systems
Revolv
Was a $300 hub, offering a "lifetime subscription".

Acquired by Nest (Google subsidiary) in October 2014. In April 2016, Nest announced that Revolv Hub will cease to operate on May 15, 2016. https://en.wikipedia.org/wiki/Nest_Labs#Intentional_disabling_of_hardware_devices

SmartThings
2012-08-23 KickStarter campaign $1.2M/$250K
2014-08-14 Acquired by Samsung refs: (1)
2015-01-05 Hub 2 runs Linux refs: (1)
Uses Groovy language for (custom) components.

SmartThings open-source components Site: http://docs.smartthings.com, Forks: 27667, Language: Groovy
Vera
Since at least 2008.

Uses Lua, open development support, community ecosystem.

Wink
Founded in 2014 as a spin-off from invention incubator Quirky.
After Quirky went through bankruptcy proceedings, it sold Wink to Flex in 2015.
In July 2017, Flex sold Wink to i.am+ for $38.7M.
Ring
2020-01 Ring Fired Employees for Watching Customer Videos
Home Automation Services
Voice/Personal Assistants
Previously, government and mob had to break into your house to install bugs. Now you can pay a small amount of money and install yourself bugs which allow 3rd parties to eavesdrop on you.

Apple Siri
Amazon Alexa
Google Assistant
OpenSource services promising no eavesdropping (please keep in mind that for some of these projects, "OpenSource" is just a marketing bait):

Mycroft.AI, code: https://github.com/MycroftAI
Snips, code: https://github.com/snipsco/
Some links point to https://github.com/snipsco/snips-platform , which isn't available. snipsco/snips-issues#25
Posts: 1
Jasper, code: https://github.com/jasperproject
Open Assistant, code: https://github.com/openassistant
Leon-AI, code: https://github.com/leon-ai/leon
Olivia-AI, code: https://github.com/olivia-ai/olivia
Video Surveillance
Many services tout "P2P" in video surveillance, to allow your smartphone to connect to your camera - when you're in your home or on another side of the world. That's oxymoron of course, there's nothing "point-to-point" in how it's implemented. Both your camera and smarphone connect to faraway 3rd-party cloud server (this happens even if both in the same home network, 5 meters one from another). All video goes via (and thus to) 3rd party of course.

Mirai Botnet was/is a botnet mostly consisting of video cameras controlled by 3rd party.

Related/useful Services and Software
Dashboards
One of the basic tasks of Home Automation is visualization and control. Dashboards is a basic way to do that. Dashboard is usually included into "full stack" HA systems, but what if you don't like it or need a custom one? Note that majority of systems below offer visualization only (no control).

https://github.com/Shopify/dashing - Ruby, 11128 stars, no longer maintained
https://github.com/Smashing/smashing - maintained fork, 1665 stars
https://github.com/evolvedlight/pydashie - "Port of Dashing to Python" 416 stars
https://github.com/allegro/tipboard - Python, 773 stars
https://github.com/Freeboard/freeboard - JavaScript, 5416 stars
Grid Layouts
https://github.com/ducksboard/gridster.js - The "default" solution, jQuery plugin (6188 stars)
https://github.com/haltu/muuri - No jQuery dep, no item resize (7832 stars)
https://github.com/hootsuite/grid (3433 stars)
Floor Plans
A step above and beyond dashboards is visualizing what happens where on the actual floorplan of your home.

ha-floorplan - Floorplans for Home Assistant
Sweet Home 3D - Open Source desktop application (Java)
https://planner5d.com - Online editor, allows to save/import plan in JSON format. Image renders are freemium.
Compiled, maintained, content (c) 2017-2021 Paul Sokolovsky

Released under Creative Commons Attribution-ShareAlike 4.0 International License (CC BY-SA 4.0).