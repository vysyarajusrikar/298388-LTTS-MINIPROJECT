# Requirements
## Introduction
Manual booking of Bus Tickets is quite an inconvenience to customers who have to wait long hours to book these tickets and with the recent times of lockdown and social distancing due to Corona it is more important now that ever to switch to online methods of efficiently managing these bookings. Another drawback of booking in person or throught third party services was the lack of transparency in terms of cost and availability of tickets that would arise with the ticket dealers who were tasked with selling these tickets. Thus,to deal with these issues a web-based service where customers can book tickets and retailers can keep track of the bookings seems to be an efficient and viable solution.

## Research
### Purpose of an online boooking system
An online booking system is versitile software solution that is already widely used by many customer based services and allows potential customers to self-book services as per their needs and pre-pay for the services of their requirement. 

Although online payments and bookings are common only 33% of the population in India are estimated to have used these services. A major reason for this is the fact that a large portion of the population demograph which is made of people above the age of 60 and also people of modest economic backgrounds continue to prefer an offline method of booking as online methods are inaccessible or overly complex for their needs. But with the recent pandemic it is of utmost importance to ensure all parts of society have have access to a easy to use and practical booking system which is the goal of this project.

### Advantages 
* **The business is open throughout the day:** As online services can be accessed as and when required this allows for flexible work timings for the employees and also improves the avaiability of services at the customers convenience.
* **Lesser workload:** In comparison to a manual booking system that would need an employee to manually make entries for record keeping, online booking systems wouldhave  the customers fill up their details and also provide a flexible workload to the employees.
* **Organised data:** With an online system all the data is logged in real time and it is easier to keep a track of service avaiability and also avoid overbookings and cancellations.
* **Better customer experience:** As online booking systems cut out the middle man there is a lesser chance of inflation of prices and also miscommunication between the customer and the service based company.

### Disadvantages
* **It takes time to setup:** Though it may to relatively easy to setup an online booking software it is time consuming to adopt company practices and norms to fit in with it and also takes time to configure the system as per the companies needs.
* **Train staff:** It also takes time to train and get the staff accustomed to a new system and ensure efficient workflow using the system.
* **User friendly interface:** At times certain online systems unfortunately have a cluttered UI whcih makes them hard to navigate and might discourage users from leveraging it's services.

## Cost and Features
There are large costs involved in setting up an online booking service especially in terms of development of a website and management of data from the system with the help of cloud based servers.
**Average cost to build a Website involve:**
* **UI/UX:** A good UI/UX design is vital for any online booking system, a system that is hard to use and navigate will not be prefered by any user. This involves **1)Research, 2)Wireframe, 3)Prototype** with all these elements considered it would cost an average of **$750 to $4,000** for a good design.
* **Front-End Development:** The front end is all the aspects of the website that a user interacts with. The main factors here are **1)Website responsiveness/adaptiveness, 2)Complexity of animations** which is done using HTML, CSS ..etc. Average pricing is **$1,000 to $12,500** and over.
* **Back-End development:** All the website features and functionality are powerred by the backend programming doen with tools like Node.js, Express.js..etc which help **1)Integration with 3rd party services, 2)Non-standard data processing, 3)Complex queries**. Average pricing **$4,000 to $12,500**.
* **Admin Panel Development:** Content management system to create and manage the content on the website. Average cost varys from **$3,000 to $9,000**.

| Stage | Min Price  | Max Price  |
| :-----: | :-: | :-: |
| UI/UX design | $750 | $4,000 |
| Front end | $1,000 | $12,500 |
| Back end | $4,000 | $12,500 |
| Admin panel | $3,000 | $9,000 |
| Total | $8,750 | $38,000 |

**Server side cost:** Based on the size of an organisation they may choose to rent a server which would range from **$40/month tp $80/month** or buying a server which would cost the company around **$1,000 to $4,000** based on the server specs and requirements as deemed necessary.

**The above mentioned costs are involved in the setup of a dedicated online booking system and this project is to deal with the proof of concept or a take on efficient and easy to use online systems using the basics of C-programming and thus will be a more simple implementation than that detailed above.**

## Defining Our System
This  is a simple C-programming based system that would showcase the basic functionality of a booking system and how data from the system can be used to efficiently manage and run the services provided.
**The system would mainly cater to the need's of  a customer trying to avail a service (in this case bus service) and a client providing the service for efficient data management.**
![Bus_project](https://user-images.githubusercontent.com/57947483/114335598-b88cb580-9b6a-11eb-9f34-bb427d04f4b8.PNG)

## SWOT ANALYSIS
![SWOT](https://user-images.githubusercontent.com/57947483/114338041-e1637980-9b6f-11eb-8614-a17fb3553b61.png)

# 4W&#39;s and 1&#39;H

## Who:
* Transportation services both Private and Government based services can leverage the advantages of an online booking system.
* Small scale private shuttle services get a wider exposure.

## What:
* An online booking system will improve avaiability of services to customers and also improve the services offered by companies and also allow for better management of the services provided.

## When:
* This has been a recuring problem since booking based services have been introduced and is an inconvenience for people to book tickets offline. 

## Where:
* This is a common problem throughout all the ticket based services provided such as Buses, trains ..etc and further extends to services like movie theaters, amusement parks ..etc.

## How:
* Online services would reduce the wait time involved in availing the services of the users requirement and also allow for better management and provide better support from the companies side.

# Detail requirements
## High Level Requirements:
| ID | Description  | Status  |
| :-----: | :-: | :-: |
| H1 | Booking system for customers | Implemented |
| H2 | Data management system for companies | Implemented |

##  Low level Requirements:
| ID | Description  | Status  |
| :-----: | :-: | :-: |
| L1 | Customer makes a booking as per requirement| Implemented |
| L2 | Update bus avaiability and seat availability in real time | Yet to be  implemented |
| L3 | Store booking information for record keeping | Implemented |
| L4 | Allow new bus routes to be updated by company | Implemented |
| L5 | Allow management of bus routes as per requirement | Yet to be implemented |
