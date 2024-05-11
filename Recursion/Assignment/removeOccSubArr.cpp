// void removeRE(string& s ,  string& part){

//         int found = s.find(part);

//         if(found != string::npos){

//             string left_part = s.substr(0 , found);
//             string right_part = s.substr(found+part.size() , s.size());

// ******** important

// [this s.size() -> ye substr function apne aap samaj jayega or substring ke last taak kara dega chaiye mai value int_max bhi de do s.size() ki jagah vo automatically samaj jayega 
// ]


//             s = left_part + right_part;

//             removeRE(s,part);

//         }

//         else{

//             // base  case (means string s , now there is no occurence of part string)

//             return;
//         }

//     }
