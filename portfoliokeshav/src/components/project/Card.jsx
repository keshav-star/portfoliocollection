import React from 'react';

const PortfolioCard = ({ imageSrc, projectName, urled }) => {
    const sent = (url)=>{
        window.open(url, '_blank');
    }
  return (
    <div className="portfolio-card">
      <div className="image-container">
        <img src={imageSrc} alt={projectName} />
      </div>
      <button className="project-name" onClick={()=> sent(urled)}>
        {projectName}
      </button>
    </div>
  );
};

export default PortfolioCard;
