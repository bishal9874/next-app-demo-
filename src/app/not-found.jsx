import Link from "next/link";
import Image from "next/image";
import "./not-found.scss"
export default function NotFound() {
  return (
    <div className="not_found">
      <div>
        
        <h1 style={{fontSize:"100px"}}>Not Found</h1>
        <p>Could not find requested resource</p>
        <Link className="button" href="/">Return Home</Link>
      </div>
      <div>
        <Image
          src="/assets/not_found.png"
          width={500}
          height={500}
          alt="Picture of the author"
         />
      </div>
    </div>
  );
}
