#include "ExpansionRegionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ExpansionRegionImpl::ExpansionRegionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	m_inputElement.reset(new std::vector<std::shared_ptr<uml::ExpansionNode>>());
	m_outputElement.reset(new std::vector<std::shared_ptr<uml::ExpansionNode>>());
}

ExpansionRegionImpl::~ExpansionRegionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ExpansionRegion "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ExpansionRegionImpl::ExpansionRegionImpl(const ExpansionRegionImpl & obj)
{
	//create copy of all Attributes
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_mode = obj.getMode();
	m_mustIsolate = obj.getMustIsolate();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	m_activity  = obj.getActivity();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _containedEdge = obj.getContainedEdge();
	this->getContainedEdge()->insert(this->getContainedEdge()->end(), _containedEdge->begin(), _containedEdge->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> _containedNode = obj.getContainedNode();
	this->getContainedNode()->insert(this->getContainedNode()->end(), _containedNode->begin(), _containedNode->end());

	m_context  = obj.getContext();

	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> _importedMember = obj.getImportedMember();
	this->getImportedMember()->insert(this->getImportedMember()->end(), _importedMember->begin(), _importedMember->end());

	m_inActivity  = obj.getInActivity();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup = obj.getInGroup();
	this->getInGroup()->insert(this->getInGroup()->end(), _inGroup->begin(), _inGroup->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> _inInterruptibleRegion = obj.getInInterruptibleRegion();
	this->getInInterruptibleRegion()->insert(this->getInInterruptibleRegion()->end(), _inInterruptibleRegion->begin(), _inInterruptibleRegion->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> _inPartition = obj.getInPartition();
	this->getInPartition()->insert(this->getInPartition()->end(), _inPartition->begin(), _inPartition->end());

	m_inStructuredNode  = obj.getInStructuredNode();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _incoming = obj.getIncoming();
	this->getIncoming()->insert(this->getIncoming()->end(), _incoming->begin(), _incoming->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _input = obj.getInput();
	this->getInput()->insert(this->getInput()->end(), _input->begin(), _input->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ExpansionNode>>> _inputElement = obj.getInputElement();
	this->getInputElement()->insert(this->getInputElement()->end(), _inputElement->begin(), _inputElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _member = obj.getMember();
	this->getMember()->insert(this->getMember()->end(), _member->begin(), _member->end());

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _outgoing = obj.getOutgoing();
	this->getOutgoing()->insert(this->getOutgoing()->end(), _outgoing->begin(), _outgoing->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _output = obj.getOutput();
	this->getOutput()->insert(this->getOutput()->end(), _output->begin(), _output->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ExpansionNode>>> _outputElement = obj.getOutputElement();
	this->getOutputElement()->insert(this->getOutputElement()->end(), _outputElement->begin(), _outputElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _ownedMember = obj.getOwnedMember();
	this->getOwnedMember()->insert(this->getOwnedMember()->end(), _ownedMember->begin(), _ownedMember->end());

	m_owner  = obj.getOwner();

	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> _redefinedNode = obj.getRedefinedNode();
	this->getRedefinedNode()->insert(this->getRedefinedNode()->end(), _redefinedNode->begin(), _redefinedNode->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _subgroup = obj.getSubgroup();
	this->getSubgroup()->insert(this->getSubgroup()->end(), _subgroup->begin(), _subgroup->end());

	m_superGroup  = obj.getSuperGroup();


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _edgeList = obj.getEdge();
	for(std::shared_ptr<uml::ActivityEdge> _edge : *_edgeList)
	{
		this->getEdge()->push_back(std::shared_ptr<uml::ActivityEdge>(dynamic_cast<uml::ActivityEdge*>(_edge->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> _elementImportList = obj.getElementImport();
	for(std::shared_ptr<uml::ElementImport> _elementImport : *_elementImportList)
	{
		this->getElementImport()->push_back(std::shared_ptr<uml::ElementImport>(dynamic_cast<uml::ElementImport*>(_elementImport->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ExceptionHandler>>> _handlerList = obj.getHandler();
	for(std::shared_ptr<uml::ExceptionHandler> _handler : *_handlerList)
	{
		this->getHandler()->push_back(std::shared_ptr<uml::ExceptionHandler>(dynamic_cast<uml::ExceptionHandler*>(_handler->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _localPostconditionList = obj.getLocalPostcondition();
	for(std::shared_ptr<uml::Constraint> _localPostcondition : *_localPostconditionList)
	{
		this->getLocalPostcondition()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPostcondition->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _localPreconditionList = obj.getLocalPrecondition();
	for(std::shared_ptr<uml::Constraint> _localPrecondition : *_localPreconditionList)
	{
		this->getLocalPrecondition()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPrecondition->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> _nodeList = obj.getNode();
	for(std::shared_ptr<uml::ActivityNode> _node : *_nodeList)
	{
		this->getNode()->push_back(std::shared_ptr<uml::ActivityNode>(dynamic_cast<uml::ActivityNode*>(_node->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _ownedRuleList = obj.getOwnedRule();
	for(std::shared_ptr<uml::Constraint> _ownedRule : *_ownedRuleList)
	{
		this->getOwnedRule()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_ownedRule->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> _packageImportList = obj.getPackageImport();
	for(std::shared_ptr<uml::PackageImport> _packageImport : *_packageImportList)
	{
		this->getPackageImport()->push_back(std::shared_ptr<uml::PackageImport>(dynamic_cast<uml::PackageImport*>(_packageImport->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _structuredNodeInputList = obj.getStructuredNodeInput();
	for(std::shared_ptr<uml::InputPin> _structuredNodeInput : *_structuredNodeInputList)
	{
		this->getStructuredNodeInput()->push_back(std::shared_ptr<uml::InputPin>(dynamic_cast<uml::InputPin*>(_structuredNodeInput->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _structuredNodeOutputList = obj.getStructuredNodeOutput();
	for(std::shared_ptr<uml::OutputPin> _structuredNodeOutput : *_structuredNodeOutputList)
	{
		this->getStructuredNodeOutput()->push_back(std::shared_ptr<uml::OutputPin>(dynamic_cast<uml::OutputPin*>(_structuredNodeOutput->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Variable>>> _variableList = obj.getVariable();
	for(std::shared_ptr<uml::Variable> _variable : *_variableList)
	{
		this->getVariable()->push_back(std::shared_ptr<uml::Variable>(dynamic_cast<uml::Variable*>(_variable->copy())));
	}
}

ecore::EObject *  ExpansionRegionImpl::copy() const
{
	return new ExpansionRegionImpl(*this);
}

std::shared_ptr<ecore::EClass> ExpansionRegionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getExpansionRegion();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void ExpansionRegionImpl::setMode (ExpansionKind _mode)
{
	m_mode = _mode;
} 

ExpansionKind ExpansionRegionImpl::getMode() const 
{
	return m_mode;
}

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::ExpansionNode>>> ExpansionRegionImpl::getInputElement() const
{
//assert(m_inputElement);
    return m_inputElement;
}


std::shared_ptr<std::vector<std::shared_ptr<uml::ExpansionNode>>> ExpansionRegionImpl::getOutputElement() const
{

    return m_outputElement;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ExpansionRegionImpl::getOwnedMember() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _ownedMember(new std::vector<std::shared_ptr<uml::NamedElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> ownedRule = getOwnedRule();
	_ownedMember->insert(_ownedMember->end(), ownedRule->begin(), ownedRule->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Variable>>> variable = getVariable();
	_ownedMember->insert(_ownedMember->end(), variable->begin(), variable->end());

	return _ownedMember;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> ExpansionRegionImpl::getRedefinedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement(new std::vector<std::shared_ptr<uml::RedefinableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> redefinedNode = getRedefinedNode();
	_redefinedElement->insert(_redefinedElement->end(), redefinedNode->begin(), redefinedNode->end());

	return _redefinedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ExpansionRegionImpl::getMember() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> _member(new std::vector<std::shared_ptr<uml::NamedElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageableElement>>> importedMember = getImportedMember();
	_member->insert(_member->end(), importedMember->begin(), importedMember->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ownedMember = getOwnedMember();
	_member->insert(_member->end(), ownedMember->begin(), ownedMember->end());

	return _member;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> ExpansionRegionImpl::getOutput() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _output(new std::vector<std::shared_ptr<uml::OutputPin>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> structuredNodeOutput = getStructuredNodeOutput();
	_output->insert(_output->end(), structuredNodeOutput->begin(), structuredNodeOutput->end());

	return _output;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> ExpansionRegionImpl::getContainedEdge() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _containedEdge(new std::vector<std::shared_ptr<uml::ActivityEdge>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> edge = getEdge();
	_containedEdge->insert(_containedEdge->end(), edge->begin(), edge->end());

	return _containedEdge;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> ExpansionRegionImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> edge = getEdge();
	_ownedElement->insert(_ownedElement->end(), edge->begin(), edge->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ElementImport>>> elementImport = getElementImport();
	_ownedElement->insert(_ownedElement->end(), elementImport->begin(), elementImport->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ExceptionHandler>>> handler = getHandler();
	_ownedElement->insert(_ownedElement->end(), handler->begin(), handler->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> input = getInput();
	_ownedElement->insert(_ownedElement->end(), input->begin(), input->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> localPostcondition = getLocalPostcondition();
	_ownedElement->insert(_ownedElement->end(), localPostcondition->begin(), localPostcondition->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> localPrecondition = getLocalPrecondition();
	_ownedElement->insert(_ownedElement->end(), localPrecondition->begin(), localPrecondition->end());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> node = getNode();
	_ownedElement->insert(_ownedElement->end(), node->begin(), node->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> output = getOutput();
	_ownedElement->insert(_ownedElement->end(), output->begin(), output->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> ownedMember = getOwnedMember();
	_ownedElement->insert(_ownedElement->end(), ownedMember->begin(), ownedMember->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::PackageImport>>> packageImport = getPackageImport();
	_ownedElement->insert(_ownedElement->end(), packageImport->begin(), packageImport->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> subgroup = getSubgroup();
	_ownedElement->insert(_ownedElement->end(), subgroup->begin(), subgroup->end());

	return _ownedElement;
}
std::shared_ptr<uml::Element> ExpansionRegionImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getActivity()!=nullptr)
	{
		_owner = getActivity();
	}
	if(getInActivity()!=nullptr)
	{
		_owner = getInActivity();
	}
	if(getInStructuredNode()!=nullptr)
	{
		_owner = getInStructuredNode();
	}
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}
	if(getSuperGroup()!=nullptr)
	{
		_owner = getSuperGroup();
	}

	return _owner;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> ExpansionRegionImpl::getContainedNode() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> _containedNode(new std::vector<std::shared_ptr<uml::ActivityNode>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> node = getNode();
	_containedNode->insert(_containedNode->end(), node->begin(), node->end());

	return _containedNode;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> ExpansionRegionImpl::getInGroup() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup(new std::vector<std::shared_ptr<uml::ActivityGroup>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> inInterruptibleRegion = getInInterruptibleRegion();
	_inGroup->insert(_inGroup->end(), inInterruptibleRegion->begin(), inInterruptibleRegion->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> inPartition = getInPartition();
	_inGroup->insert(_inGroup->end(), inPartition->begin(), inPartition->end());
	_inGroup->push_back(getInStructuredNode());

	return _inGroup;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> ExpansionRegionImpl::getInput() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _input(new std::vector<std::shared_ptr<uml::InputPin>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> structuredNodeInput = getStructuredNodeInput();
	_input->insert(_input->end(), structuredNodeInput->begin(), structuredNodeInput->end());

	return _input;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ExpansionRegionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //15513
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1554
		case UmlPackage::ACTIVITYGROUP_CONTAINEDEDGE:
			return getContainedEdge(); //15510
		case UmlPackage::ACTIVITYGROUP_CONTAINEDNODE:
			return getContainedNode(); //15511
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //15522
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1550
		case UmlPackage::STRUCTUREDACTIVITYNODE_EDGE:
			return getEdge(); //15539
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //15511
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //15521
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //15514
		case UmlPackage::ACTIVITYGROUP_INACTIVITY:
			return getInActivity(); //15512
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //15514
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //15515
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //15520
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //15516
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //15517
		case UmlPackage::ACTION_INPUT:
			return getInput(); //15523
		case UmlPackage::EXPANSIONREGION_INPUTELEMENT:
			return getInputElement(); //15547
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //15510
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //15524
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //15525
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //15526
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //15515
		case UmlPackage::EXPANSIONREGION_MODE:
			return getMode(); //15545
		case UmlPackage::STRUCTUREDACTIVITYNODE_MUSTISOLATE:
			return getMustIsolate(); //15540
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1555
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1556
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1557
		case UmlPackage::STRUCTUREDACTIVITYNODE_NODE:
			return getNode(); //15544
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //15518
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //15527
		case UmlPackage::EXPANSIONREGION_OUTPUTELEMENT:
			return getOutputElement(); //15546
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1551
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1552
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //15513
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //15510
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1553
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //15512
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1558
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //15511
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //15519
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //15512
		case UmlPackage::STRUCTUREDACTIVITYNODE_STRUCTUREDNODEINPUT:
			return getStructuredNodeInput(); //15541
		case UmlPackage::STRUCTUREDACTIVITYNODE_STRUCTUREDNODEOUTPUT:
			return getStructuredNodeOutput(); //15542
		case UmlPackage::ACTIVITYGROUP_SUBGROUP:
			return getSubgroup(); //15513
		case UmlPackage::ACTIVITYGROUP_SUPERGROUP:
			return getSuperGroup(); //15514
		case UmlPackage::STRUCTUREDACTIVITYNODE_VARIABLE:
			return getVariable(); //15543
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1559
	}
	return boost::any();
}
