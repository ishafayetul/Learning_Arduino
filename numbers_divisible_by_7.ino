// C++ code
//Loop: For
//numbers divisible by 7 between 100-500

/*for(starting;condition;increment/decrement){
  
  ...code
  
  }*/

void setup()
{
  Serial.begin(9600);
 int i;int target=500;
 int count=0;
  for(i=100;i<=target;i++){
    if(i%7==0){
    	Serial.println(i);count++;
    }
  }
  Serial.print("Total numbers divisible by 7 are: ");Serial.print(count);
  
}

void loop()
{
  
}