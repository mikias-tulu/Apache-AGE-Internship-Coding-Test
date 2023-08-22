// import React from 'react';
import { Link } from "react-router-dom";

const Home = () => {
  return (
    <div style={{ 
      backgroundImage: "linear-gradient(#1a1a1a, #000000, rgba(0,0,0,.8))", 
      color: "white", 
      minHeight: "100vh", 
      paddingTop: "80px",  // Add padding to the top
      paddingLeft: "20px", // Add padding to the left
      paddingRight: "20px" // Add padding to the right
    }}>
      <div style={{ display: "flex", justifyContent: "space-between", alignItems: "center" }}>
        <h1>Welcome to Your Dashboard</h1>
        <Link to='/login' className="btn btn-light">Logout</Link>
      </div>
      <p>This is the home page where you can access your personalized content.</p>
      <div>
        <h2>Featured Content</h2>
        <p>Explore the latest articles, videos, and updates.</p>
        {/* Add more content and components here */}
      </div>
    </div>
    
  )
}

export default Home