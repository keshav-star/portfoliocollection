import React from 'react'

export default function Navbar() {
  return (
    <div className='header'>
      <div className='name fs-2'>Keshav Sandhu</div>
      <div className='links d-flex flex-row'>
        <div className='nav-link'><a href="#">Home</a></div>
        <div className='nav-link'><a href="#skill">Skills</a></div>
        <div className='nav-link'><a href="#experience">Experience</a></div>
        <div className='nav-link'><a href='#work'>Projects</a></div>
        <div className='nav-link' ><a href="#footer">Contact</a></div></div>
    </div>
  )
}
