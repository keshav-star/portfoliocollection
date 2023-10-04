import React from 'react';
import img1 from '../assets/skills/html.png'
import img2 from '../assets/skills/css.png'
import img3 from '../assets/skills/reactjs.png'
import img4 from '../assets/skills/js.png'
import img5 from '../assets/skills/nodejs.jpg'
import img6 from '../assets/skills/mongo.png'
import img7 from '../assets/skills/mysql.png'
import img8 from '../assets/skills/postgre.png'
import img9 from '../assets/skills/c++.png'
import img0 from '../assets/skills/firebase.png'
const Skills = () => {
    return (
        <section className="skills-section">
            <div id='skill' className="skills-container">
                <div className="skills-text">
                    <h1>Skills I'm Well-Versed In</h1>
                    <p>Explore the technologies I have experience with:</p>
                </div>
                <div className="skills-icons flex-column">
                    <div>
                    <img src={img1} alt="HTML" />
                    <img src={img2} alt="CSS" />
                    <img src={img3} alt="React" />
                    <img src={img4} alt="JavaScript" />
                    <img src={img5} alt="Node.js" />
                    </div>
                   <div>
                   <img src={img6} alt="MongoDB" />
                    <img src={img7} alt="SQL" />
                    <img src={img8} alt="PostgreSQL" />
                    <img src={img9} alt="C++" />
                    <img src={img0} alt="Firebase" />
                   </div>
                </div>
            </div>
        </section>
    );
};

export default Skills;
