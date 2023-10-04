import React from 'react'
import Navbar from './components/allPage/Navbar'
import Footer from './components/allPage/Footer'
import Section from './components/herosection/Section';
import 'bootstrap/dist/css/bootstrap.min.css';
import './App.css'

export default function App() {

  return (
    <div className='home-page'>
      <Navbar/>
      <Section/>
      <Footer/>
    </div>
  )
}
