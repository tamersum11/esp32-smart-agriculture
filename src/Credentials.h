
#ifndef Credentials_h
#define Credentials_h

#include <string>

//Definition for device id number
char device_id = '1';

const char ssid[] = "Your network SSID";        //network SSID (name)
const char pass[] = "Your network password";        //network password

char hostname[]     = "Your host name";  //MySQL Server Hostname
char user[]         = "Your user name";              // MySQL Server user login username
char password[]     = "Your password";          // MySQL Server user login password

//Definition for Database Name
char database_name[] = "aktarsis";

//Definitions for query of tables
const char device_table_name[] = "cihazlar"; //devices
const char plant_table_name[] = "bitkiler"; //plants
const char device_proccess_table_name[] = "cihaz_islemler"; //device processes
const char solar_panel_table_name[] = "panel"; //solar panel

//Definitions for query of coloumns
const char query_coloumn_name_dt[] = "idcihazlar"; //id of devices
const char query_coloumn_name_pt[] = "id"; //id

const char query_coloumn_name_dpt2[] = "idislemturu"; //id of process type
const char query_coloumn_name_dpt3[] = "tarih"; //date
const char query_coloumn_name_dpt4[] = "saat"; //time
const char query_coloumn_name_dpt5[] = "sensor_sicaklik"; //temperature value coloumn from the temperature and relative humidity sensor
const char query_coloumn_name_dpt6[] = "sensor_nem_hava"; //relative humidity of air value coloumn from the temperature and relative humidity sensor
const char query_coloumn_name_dpt7[] = "sensor_nem_toprak"; //moisture of soil value coloumn from the moisture sensor
const char query_coloumn_name_dpt8[] = "sensor_ph"; //ph of soil value coloumn from the ph sensor

const char query_coloumn_name_sp1[] = "idcihaz"; //id of device
const char query_coloumn_name_sp2[] = "tarih"; //date
const char query_coloumn_name_sp3[] = "uretilen_enerji"; //generated energy of solar panel
const char query_coloumn_name_sp4[] = "tuketilen_enerji"; //consumed energy of device

//Definitions for proccess types
char feeding_id = '1';
char fretilizingid[] = '2';
char spraying_id[] = '3';
char measurment_id[] = '4';
char lightning_id[] = '5';

//Declaration for Query Transform
char transform_query[150];

//Declarations for Device info
String user_id;
String plant_id;
String soil_id;
String location_info;
String device_ph;
String device_time;

//Declarations for Device Parameters
String ideal_temp_min;
String ideal_temp_max;
String nonideal_temp_min;
String nonideal_temp_max;
String hum_min;
String hum_max;
String ph_min;
String ph_max;
String feeding_range;

#endif    //Credentials_h
