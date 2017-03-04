//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TIMEINTERVALTIMEINTERVALIMPL_HPP
#define UML_TIMEINTERVALTIMEINTERVALIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../TimeInterval.hpp"

#include "impl/IntervalImpl.hpp"



//*********************************
namespace uml 
{
	class TimeIntervalImpl :virtual public IntervalImpl, virtual public TimeInterval 
	{
		public: 
			TimeIntervalImpl(const TimeIntervalImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			TimeIntervalImpl& operator=(TimeIntervalImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TimeIntervalImpl();

		public:
			//destructor
			virtual ~TimeIntervalImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_TIMEINTERVALTIMEINTERVALIMPL_HPP */

