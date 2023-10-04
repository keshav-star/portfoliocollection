import React from 'react'
import Card from '../project/Card'
import profilepic from '../../assets/profilepic.jpg'
import pp from '../../assets/projects/todo.jpg'
import pp2 from '../../assets/projects/chat.png'
import pp3 from '../../assets/projects/dictionary.png'
import pp4 from '../../assets/projects/pp3.png'
import Certificates from '../Certificates'
import Skills from '../Skills'

export default function Section() {

  return (

    <>

      {/* Intro section  */}
      <div className='about-container '>
        <div className='profile-pic-div'>
          <img className='profile-pic' src={profilepic} alt="" />
        </div>
        <div className='text-center fs-3 summary'>
         
          <p>Hi, I'm keshav, <br /> MERN-stack web developer proficient in ReactJs and Nodejs. 
          I have a strong proficiency in building interactive and user-friendly websites.
          Experience in using Firebase, MongoDB, and PostgreSQL in backend.
          Fast learner, adaptable to new technologies.</p>
        </div>

      </div>



      {/* projects section */}
      <div id="work" className="container ">
        <h1 className='text-center'>MY WORKS</h1>
        <div className=" d-flex justify-content-center project-cards">
          <div className="p-2 m-2"><Card imageSrc={pp2} projectName={"Psyc chek"} urled={'https://keshav-star.github.io/last_sem_project/'} /></div>
          <div className="p-2 m-2"><Card imageSrc={pp} projectName={"To-do List"} urled={'https://keshav-star.github.io/todoList'} /></div>
          <div className="p-2 m-2 smr"><Card imageSrc={pp2} projectName={"Weather App"} urled={'https://keshav-star.github.io/cloudysun'} /></div>
          {/* <div className='d-flex justify-content-center align-items-center'><div className="showmore">
            {'>'}</div>
          </div> */}

        </div>
        <div className=" d-none justify-content-center">
          <div className="p-2 m-2"><Card imageSrc={pp4} projectName={"Expense Book"} urled={'https://keshav-star.github.io/dgbook/'} /></div>
          <div className="p-2 m-2"><Card imageSrc={pp3} projectName={"Dictionary"} urled={'https://keshav-star.github.io/WordFind/'} /></div>
        </div>
      </div>

      {/* Skills section */}

      <Skills />

      {/* Training and certificates section */}

      <Certificates />
    </>
  )
}
// let typed = document.getElementsByClassName('typed');
// console.log(typed[0])