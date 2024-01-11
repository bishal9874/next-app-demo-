
async function takeTime() {
  await new Promise((resvole) => {
    setTimeout(resvole, 3000);
  });
}


const  page  =  async () => {
  await takeTime();
  return (
    <div  style={{fontSize:"100px"}}>This is about page</div>
  )
}

export default page