import React from "react";

const certificates = [
    {
        title: 'Certificate 1',
        organization: 'Organization 1',
        date: 'January 2022',
    },
    {
        title: 'Certificate 2',
        organization: 'Organization 2',
        date: 'February 2022',
    },
    {
        title: 'Certificate 3',
        organization: 'Organization 3',
        date: 'March 2022',
    },
];

const Certificates = () => {
    return (
        <div className="train">
            <div className="certificate-info ">
                <h2>Certificates</h2>
                <ul >
                    {certificates.map((certificate, index) => (
                        <li className='shadow m-1 p-2' key={index}>
                            <h3>{certificate.title}</h3>
                            <p>Organization: {certificate.organization}</p>
                            <p>Date: {certificate.date}</p>
                        </li>
                    ))}
                </ul>
            </div>
        </div>
    )
}

export default Certificates;