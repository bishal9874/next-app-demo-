import { NextResponse } from "next/server";

 export function GET(request){
    const users = [{
         name:'bishal mondal',
         phone:"9874713473",
         course:"next js" 
    },

    {
        name:'Biplab',
        phone:"9874713473",
        course:"next js" 
   },
   {
    name:'biswajit mondal',
    phone:"9874713473",
    course:"next js" 
},
];

return NextResponse.json(users);
 }

 export  function POST(){

 }

 export function DELETE(){

 }
 export function PUT(){

 }